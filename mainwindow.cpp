#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
#include <QListWidgetItem>
#include <QMessageBox>
#include <QByteArray>
#include <QIcon>
#include <QStringList>
#include <QAction>
#include <QMenu>
#include <QApplication>
#include <QPropertyAnimation>
#include <QScreen>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent,Qt::WindowStaysOnTopHint)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    db = QSqlDatabase::addDatabase("QSQLITE","VPowerNote");
    db.setDatabaseName("D:/Notes/VPowerNote/VPowerNote.db");
    db.open();
    initial();
    ui->newWidget->hide();
    createActions();
    createTrayIcon();
    connect(trayIcon, &QSystemTrayIcon::messageClicked, this, &MainWindow::messageClicked);
    connect(trayIcon, &QSystemTrayIcon::activated, this, &MainWindow::iconActivated);
    setIcon();
    trayIcon->show();
    ui->pushButton_4->hide();
    QScreen *primaryScreen = QApplication::primaryScreen();
    QRect screenGeometry = primaryScreen->geometry();
    QIcon btnicon = QIcon(":/icon/Alexa@2x.png");
    ui->pushButton_4->setIcon(btnicon);
    swidth = screenGeometry.width();
    sheight = screenGeometry.height();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_listWidget_itemClicked(QListWidgetItem *item)
{
    on_pushButton_6_clicked();
    QSqlQuery query("", db);
    QByteArray data;
    data.append(item->text());
    query.exec("SELECT * FROM Note WHERE Title='"+data.toBase64()+"'");
    query.next();
    currentlistrow = query.value(0).toString();
    QString titleStr = query.value(1).toString();
    QByteArray titledata;
    titledata.append(titleStr);
    QByteArray title = QByteArray::fromBase64(titledata);
    ui->label->setText(title);
    ui->plainTextEdit->clear();
    QString str = query.value(2).toString();
    QByteArray ggg;
    ggg.append(str);
    QByteArray temp = QByteArray::fromBase64(ggg);
    QString plain;
    plain.append(temp);
    ui->plainTextEdit->insertPlainText(plain);
    ui->pushButton_2->setEnabled(true);
    ui->pushButton_3->setEnabled(true);

}


void MainWindow::on_pushButton_2_clicked()
{
    if(ui->listWidget->count()!=0){
        const QMessageBox::StandardButton ret = QMessageBox::warning(this, tr("Really?"),
                                               tr("Do you want to remove this item?"),
                                               QMessageBox::Ok | QMessageBox::Cancel);
        if(ret==QMessageBox::Ok) {
            QSqlQuery query("", db);
            query.exec("DELETE FROM Note WHERE id="+currentlistrow+"");
            query.next();
            ui->plainTextEdit->clear();
            ui->listWidget->clear();
            query.exec("SELECT Title FROM Note");
            listitems.clear();
            while (query.next()) {
                QString itemstr = query.value(0).toString();
                QByteArray list_item;
                list_item.append(itemstr);
                QString item;
                item.append(QByteArray::fromBase64(list_item));
                listitems.insert(listitems.count(),item);
            }
            listitems.sort();
            ui->listWidget->insertItems(0,listitems);
            ui->pushButton_2->setEnabled(false);
            ui->pushButton_3->setEnabled(false);
    }


    }
}

void MainWindow::on_lineEdit_textChanged(const QString &arg1)
{
    ui->pushButton_2->setEnabled(false);
    ui->pushButton_3->setEnabled(false);
    QStringList filter = listitems.filter(arg1);
    ui->listWidget->clear();
    ui->listWidget->insertItems(0,filter);
}


void MainWindow::on_pushButton_clicked()
{
    ui->plainTextEdit->hide();
    ui->newWidget->show();
    ui->pushButton->setEnabled(false);
}


void MainWindow::on_pushButton_3_clicked()
{
    if(!isEditMode){
        ui->plainTextEdit->setFocus();
        ui->plainTextEdit->setReadOnly(false);
        ui->pushButton_3->setText("Save");
    }
    else{
        ui->plainTextEdit->setReadOnly(true);
        ui->pushButton_3->setText("Edit");
        updateText();
    }
    isEditMode = !isEditMode;
}

void MainWindow::updateText(){
    QSqlQuery query("", db);
    QString textstr = ui->plainTextEdit->toPlainText();
    QByteArray textdata;
    textdata.append(textstr);
    query.exec("UPDATE Note SET Text='"+textdata.toBase64()+"' WHERE id="+currentlistrow+"");
    query.next();
}

void MainWindow::initial()
{

    QSqlQuery query("",db);
    query.exec("SELECT Title FROM Note");
    listitems.clear();
    while (query.next()) {
        QString itemstr = query.value(0).toString();
        QByteArray list_item;
        list_item.append(itemstr);
        QString item;
        item.append(QByteArray::fromBase64(list_item));
        listitems.insert(listitems.count(),item);
    }
    ui->listWidget->clear();
    listitems.sort(Qt::CaseSensitive);
    ui->listWidget->addItems(listitems);
    ui->pushButton_2->setEnabled(false);
    ui->pushButton_3->setEnabled(false);
    isEditMode = false;

}

void MainWindow::test()
{
    initial();
}



void MainWindow::on_pushButton_6_clicked()
{
    ui->pushButton->setEnabled(true);
    ui->newWidget->hide();
    ui->plainTextEdit->show();
}


void MainWindow::on_pushButton_5_clicked()
{
    QSqlQuery query("",db);
    QByteArray titleData, textData;
    QString titlestr = ui->newTitle->text();
    QString textstr = ui->newText->toPlainText();
    titleData.append(titlestr);
    textData.append(textstr);
    query.exec("INSERT INTO Note VALUES(NULL,'"+titleData.toBase64()+"', '"+textData.toBase64()+"')");
    query.next();
    ui->newText->clear();
    ui->newTitle->clear();
    initial();
}

void MainWindow::closeEvent(QCloseEvent *event)
{
#ifdef Q_OS_OSX
    if (!event->spontaneous() || !isVisible()) {
        return;
    }
#endif
    if (trayIcon->isVisible()) {
        showminimum();
        event->ignore();
    }
}


void MainWindow::createActions()
{
    minimizeAction = new QAction(tr("Mi&nimize"), this);
    connect(minimizeAction, &QAction::triggered, this, &QWidget::hide);

    restoreAction = new QAction(tr("&Restore"), this);
    connect(restoreAction, &QAction::triggered, this, &MainWindow::shownormal);

    quitAction = new QAction(tr("&Quit"), this);
    connect(quitAction, &QAction::triggered, qApp, &QCoreApplication::quit);
}

void MainWindow::createTrayIcon()
{
    trayIconMenu = new QMenu(this);
    trayIconMenu->addAction(minimizeAction);
    trayIconMenu->addAction(restoreAction);
    trayIconMenu->addSeparator();
    trayIconMenu->addAction(quitAction);

    trayIcon = new QSystemTrayIcon(this);
    trayIcon->setContextMenu(trayIconMenu);
}

void MainWindow::showMessage()
{

}
//! [5]

//! [6]
void MainWindow::messageClicked()
{

}

void MainWindow::setIcon()
{
    QIcon icon = QIcon(":/icon/Alexa@2x.png"), tr("Bad");
    trayIcon->setIcon(icon);
    setWindowIcon(icon);
    trayIcon->setToolTip("VPowerNote");


}
//! [3]

//! [4]
void MainWindow::iconActivated(QSystemTrayIcon::ActivationReason reason)
{
    switch (reason) {
    case QSystemTrayIcon::Trigger:
    case QSystemTrayIcon::DoubleClick:
        shownormal();
        break;
    default:
        ;
    }
}

void MainWindow::on_newTitle_returnPressed()
{
    ui->newText->setFocus();
}

void MainWindow::showminimum()
{
    ui->pushButton_4->show();
    ui->frame->hide();
    ui->widget->hide();
    ui->widget_4->hide();
    this->setWindowFlags(Qt::FramelessWindowHint | Qt::WindowStaysOnTopHint | Qt::Tool);
    QPropertyAnimation *animation = new QPropertyAnimation(this, "geometry");
    animation->setDuration(100);
    animation->setStartValue(QRect(this->x(), this->y(), this->width(), this->height()));
    animation->setEndValue(QRect(swidth-80, sheight-300, 80, 80));
    animation->start();
    this->show();
}

void MainWindow::shownormal()
{
    ui->pushButton_4->hide();
    ui->frame->show();
    ui->widget->show();
    ui->widget_4->show();
    this->setWindowFlags(Qt::WindowStaysOnTopHint);
    QPropertyAnimation *animation = new QPropertyAnimation(this, "geometry");
    animation->setDuration(100);
    animation->setStartValue(QRect(this->x(), this->y(), this->width(), this->height()));
    animation->setEndValue(QRect(swidth/2-350, sheight/2-200, 700, 340));
    animation->start();
    this->show();
}

void MainWindow::on_pushButton_4_clicked()
{
    shownormal();
}


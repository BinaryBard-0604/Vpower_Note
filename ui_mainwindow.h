/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_4;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit;
    QListWidget *listWidget;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_3;
    QPlainTextEdit *plainTextEdit;
    QWidget *newWidget;
    QVBoxLayout *verticalLayout_4;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_6;
    QLineEdit *newTitle;
    QLabel *label_3;
    QPlainTextEdit *newText;
    QPushButton *pushButton_5;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(701, 424);
        MainWindow->setStyleSheet(QString::fromUtf8("alternate-background-color: rgb(255, 255, 255);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setMinimumSize(QSize(80, 80));
        pushButton_4->setMaximumSize(QSize(80, 80));
        pushButton_4->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(pushButton_4);

        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(frame);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_4->addWidget(pushButton);

        pushButton_3 = new QPushButton(frame);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        horizontalLayout_4->addWidget(pushButton_3);

        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_4->addWidget(pushButton_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("font: 11pt \"MS Shell Dlg 2\";"));

        horizontalLayout_4->addWidget(label);


        verticalLayout->addWidget(frame);

        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        widget_3 = new QWidget(widget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setMinimumSize(QSize(215, 0));
        widget_3->setMaximumSize(QSize(215, 16777215));
        widget_3->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_2 = new QVBoxLayout(widget_3);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, -1, -1, 2);
        lineEdit = new QLineEdit(widget_3);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setMinimumSize(QSize(0, 30));
        lineEdit->setStyleSheet(QString::fromUtf8("font: 10pt \"MS Shell Dlg 2\";"));
        lineEdit->setClearButtonEnabled(true);

        verticalLayout_2->addWidget(lineEdit);

        listWidget = new QListWidget(widget_3);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setMinimumSize(QSize(0, 300));
        listWidget->setStyleSheet(QString::fromUtf8("font: 11pt \"MS Shell Dlg 2\";"));
        listWidget->setViewMode(QListView::ListMode);

        verticalLayout_2->addWidget(listWidget);


        horizontalLayout->addWidget(widget_3);

        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        verticalLayout_3 = new QVBoxLayout(widget_2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(-1, -1, -1, 2);
        plainTextEdit = new QPlainTextEdit(widget_2);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setMinimumSize(QSize(450, 0));
        plainTextEdit->setStyleSheet(QString::fromUtf8("font: 11pt \"MS Shell Dlg 2\";\n"
""));
        plainTextEdit->setReadOnly(true);
        plainTextEdit->setBackgroundVisible(false);
        plainTextEdit->setCenterOnScroll(false);

        verticalLayout_3->addWidget(plainTextEdit);

        newWidget = new QWidget(widget_2);
        newWidget->setObjectName(QString::fromUtf8("newWidget"));
        verticalLayout_4 = new QVBoxLayout(newWidget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(-1, 0, -1, -1);
        widget_5 = new QWidget(newWidget);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        horizontalLayout_3 = new QHBoxLayout(widget_5);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(widget_5);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("font: 10pt \"MS Shell Dlg 2\";"));

        horizontalLayout_3->addWidget(label_4);

        horizontalSpacer_3 = new QSpacerItem(409, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        pushButton_6 = new QPushButton(widget_5);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        horizontalLayout_3->addWidget(pushButton_6);


        verticalLayout_4->addWidget(widget_5);

        newTitle = new QLineEdit(newWidget);
        newTitle->setObjectName(QString::fromUtf8("newTitle"));
        newTitle->setMinimumSize(QSize(0, 30));
        newTitle->setStyleSheet(QString::fromUtf8("font: 10pt \"MS Shell Dlg 2\";"));

        verticalLayout_4->addWidget(newTitle);

        label_3 = new QLabel(newWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("font: 10pt \"MS Shell Dlg 2\";"));

        verticalLayout_4->addWidget(label_3);

        newText = new QPlainTextEdit(newWidget);
        newText->setObjectName(QString::fromUtf8("newText"));
        newText->setStyleSheet(QString::fromUtf8("font: 10pt \"MS Shell Dlg 2\";"));

        verticalLayout_4->addWidget(newText);

        pushButton_5 = new QPushButton(newWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setMinimumSize(QSize(0, 30));

        verticalLayout_4->addWidget(pushButton_5);


        verticalLayout_3->addWidget(newWidget);


        horizontalLayout->addWidget(widget_2);


        verticalLayout->addWidget(widget);

        widget_4 = new QWidget(centralwidget);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        horizontalLayout_2 = new QHBoxLayout(widget_4);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 9, 0);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        label_2 = new QLabel(widget_4);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);


        verticalLayout->addWidget(widget_4);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        listWidget->setCurrentRow(-1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "VPowerNote", nullptr));
        pushButton_4->setText(QApplication::translate("MainWindow", "VP Note", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "New", nullptr));
        pushButton_3->setText(QApplication::translate("MainWindow", "Edit", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "Delete", nullptr));
        label->setText(QApplication::translate("MainWindow", "Select Title...", nullptr));
        lineEdit->setPlaceholderText(QApplication::translate("MainWindow", "Search...", nullptr));
        plainTextEdit->setPlainText(QString());
        label_4->setText(QApplication::translate("MainWindow", "Title", nullptr));
        pushButton_6->setText(QApplication::translate("MainWindow", "Close", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Text", nullptr));
        pushButton_5->setText(QApplication::translate("MainWindow", "Insert", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Created By VPower, 2023", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

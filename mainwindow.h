#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QListWidgetItem>
#include <QSystemTrayIcon>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
class QAction;
class QCheckBox;
class QComboBox;
class QGroupBox;
class QLabel;
class QLineEdit;
class QMenu;
class QPushButton;
class QSpinBox;
class QTextEdit;
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    void test();
    void initial();
    ~MainWindow();

private slots:
    void on_listWidget_itemClicked(QListWidgetItem *item);

    void on_pushButton_2_clicked();

    void on_lineEdit_textChanged(const QString &arg1);

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void updateText();

    void on_pushButton_6_clicked();

    void on_pushButton_5_clicked();

    void setIcon();

    void iconActivated(QSystemTrayIcon::ActivationReason reason);
    void showMessage();
    void messageClicked();
    void on_newTitle_returnPressed();
    void showminimum();
    void shownormal();

    void on_pushButton_4_clicked();

private:
    Ui::MainWindow *ui;
    QSqlDatabase db;
    QStringList listitems;
    QString currentlistrow;
    bool isEditMode;
    QAction *minimizeAction;
    QAction *maximizeAction;
    QAction *restoreAction;
    QAction *quitAction;
    QSystemTrayIcon *trayIcon;
    QMenu *trayIconMenu;
    void createActions();
    void createTrayIcon();
    int swidth;
    int sheight;

protected:
    void closeEvent(QCloseEvent *event);
};
#endif // MAINWINDOW_H

#include "form.h"
#include "ui_form.h"

Form::Form(QWidget *parent) :
    QWidget(parent,Qt::WindowStaysOnTopHint),
    ui(new Ui::Form)
{
    ui->setupUi(this);

}

Form::~Form()
{
    delete ui;
}

void Form::on_pushButton_clicked()
{
    this->setWindowFlags(Qt::FramelessWindowHint | Qt::WindowStaysOnTopHint);
    this->show();
}

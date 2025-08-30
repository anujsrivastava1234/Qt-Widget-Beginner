#include "widget.h"
#include "ui_widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_submitButton_clicked()
{
    qDebug() << "Hello, There";
    qDebug() << "LastName : " << ui->lastNameLineEdit->text();
    qDebug() << "FirstName :" << ui->firstNameLineEdit->text();
    qDebug() << "Message : " << ui->messageTextEdit->toPlainText();
}


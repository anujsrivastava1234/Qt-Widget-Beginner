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

void Widget::on_clickMe_clicked()
{
    qDebug() << "You have to click on the Button";
    QMessageBox::information(this,"Information","you have to click on the button");
}


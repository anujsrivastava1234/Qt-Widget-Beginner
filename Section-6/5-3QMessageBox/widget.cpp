#include "widget.h"
#include <QPushButton>
#include <QMessageBox>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    QPushButton *button = new QPushButton("Click Me", this);
    button->move(200, 200);
    connect(button, &QPushButton::clicked, this, &Widget::showMessage);
}

Widget::~Widget() {}

void Widget::showMessage()
{
    qDebug() << "Button is clicked";
    // QMessageBox messageBox;
    // messageBox.setMinimumSize(500, 200);
    // messageBox.setWindowTitle("Message Title");
    // messageBox.setText("There is some information");
    // messageBox.setIcon(QMessageBox::Critical);
    // messageBox.setStandardButtons(QMessageBox::Ok | QMessageBox::Cancel);
    // messageBox.setDefaultButton(QMessageBox::Cancel);

    // int ret = messageBox.exec();
    // if(ret == QMessageBox::Ok)
    // {
    //     qDebug() << "User clicked on OK!";
    // }else{
    //     qDebug() << "User clicked on Cancel!";
    // }

    int ret = QMessageBox::critical(this, "Critical", "Something happened",QMessageBox::Button::Ok | QMessageBox::Button::Abort, QMessageBox::Button::Abort);
}

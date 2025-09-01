#include "rockwidget.h"
#include <QPushButton>
#include <QLabel>
#include <QPalette>

RockWidget::RockWidget(QWidget *parent)
    : QWidget{parent}
{
    //Label1
    QLabel *label = new QLabel(this);
    label->setText("First Text\nSecond Text");

    //set the palette
    QPalette myPalette;
    myPalette.setColor(QPalette::Window, Qt::yellow);
    myPalette.setColor(QPalette::WindowText, Qt::blue);

    QFont font1("Times", 20, QFont::Bold);

    QLabel *label2 = new QLabel(this);
    label2->setAutoFillBackground(true);
    label2->setPalette(myPalette);
    label2->setFont(font1);
    label2->move(120, 50);
    label2->setText("This is my colored text!!");

    QPalette fontPalette1;
    fontPalette1.setColor(QPalette::Window, Qt::green);
    fontPalette1.setColor(QPalette::WindowText, Qt::blue);

    QLabel *label3 = new QLabel(this);
    label3->setAutoFillBackground(true);
    label3->setText("This is my new Text");
    label3->setPalette(fontPalette1);
    QFont font2("Times new Romans", 50, QFont::Bold);
    label3->setFont(font2);
    label3->move(150, 250);


    QPushButton *myButton = new QPushButton(this);
    myButton->setText("Click Me");
    myButton->move(150, 150);
    //connections
    connect(myButton, &QPushButton::clicked, this, &RockWidget::on_button_clicked);
}

void RockWidget::on_button_clicked()
{
    QMessageBox::information(this,"Information","This is information text");
}

QSize RockWidget::sizeHint() const
{
    return QSize(640,480);

}

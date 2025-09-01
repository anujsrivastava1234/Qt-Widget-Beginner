#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    //string notation
    //connect(ui->horizontalSlider, SIGNAL(valueChanged(int)), ui->progressBar, SLOT(setValue(int)));
    //functor notation
    //connect(ui->horizontalSlider, &QSlider::sliderMoved, ui->progressBar, &QProgressBar::setValue);

    //functor notation with lambda
    connect(ui->horizontalSlider,&QSlider::sliderMoved, [=](){
        ui->progressBar->setValue(ui->horizontalSlider->value());
    });

    connect(ui->horizontalSlider, &QSlider::sliderMoved, [=](){
        value_changed(ui->horizontalSlider->value());
    });
}

Widget::~Widget()
{
    delete ui;
}

void Widget::value_changed(int value)
{
    qDebug() << "Value : " << value;
}


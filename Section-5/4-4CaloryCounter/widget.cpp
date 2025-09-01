#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);


    m_person.setWeight(ui->weightSpinBox->value());
    m_time = ui->timeSpinBox->value();
    m_speed = ui->speedSpinBox->value();

    connect(ui->weightSpinBox, &QDoubleSpinBox::valueChanged, this, &Widget::weight_changed);
    connect(ui->timeSpinBox, &QDoubleSpinBox::valueChanged, this, &Widget::time_changed);
    connect(ui->speedSpinBox, &QDoubleSpinBox::valueChanged, this, &Widget::speed_changed);

    connect(this, &Widget::on_calory_changed, [=](){
        ui->caloryCountLabel->setText(QString::number(m_calory_counter));
    });

}

Widget::~Widget()
{
    delete ui;
}

void Widget::calory_count()
{
    m_calory_counter = ( (0.0215 * (m_speed * m_speed * m_speed)) - (0.1765 * (m_speed * m_speed)) + (0.8710 * m_speed) + 1.4577) * m_person.weight() * m_time;
    emit on_calory_changed();
}

void Widget::time_changed(double time)
{
    m_time = time;
    calory_count();
}

void Widget::weight_changed(double weight)
{
    m_person.setWeight(weight);
    calory_count();
}

void Widget::speed_changed(double speed)
{
    m_speed = speed;
    calory_count();
}

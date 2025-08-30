#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
    , m_final_number(10)
{
    ui->setupUi(this);

    /* 1.Generate the random number
     * 2. Set the Label to empty string
     * 3. Disable the StartOver Button
     */

    //Intialized the srand method
    srand(static_cast<unsigned>(time(nullptr)));

    int random_number = rand() % 10 + 1;
    m_secert_number = random_number;

    ui->messageLabel->setText("");
    ui->scoreLabel->setText("");
    ui->startOverButton->setDisabled(true);

}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_guessButton_clicked()
{

    m_guess_number = ui->numberSpinBox->value();

    if(m_guess_number > m_secert_number)
    {
        ui->messageLabel->setText("Number is much lower than that!");
        m_final_number -= 1;
    }else if(m_guess_number < m_secert_number)
    {
        ui->messageLabel->setText("Number is much higher than that!");
        m_final_number -= 1;
    }else {
        ui->messageLabel->setText("Congratulations!! You Won");
        ui->scoreLabel->setText("Final Score : " + QString::number(m_final_number));
        ui->startOverButton->setDisabled(false);
        ui->guessButton->setDisabled(true);
    }
}


void Widget::on_startOverButton_clicked()
{
    m_secert_number = rand() % 10 + 1;
    ui->numberSpinBox->setValue(1);
    m_final_number = 10;
    ui->scoreLabel->setText("");
    ui->startOverButton->setDisabled(true);
    ui->guessButton->setDisabled(false);
    ui->messageLabel->setText("");
}


#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <cstdlib>
#include <time.h>

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_guessButton_clicked();

    void on_startOverButton_clicked();

private:
    Ui::Widget *ui;
    int m_guess_number;
    int m_secert_number;
    int m_final_number;
};
#endif // WIDGET_H

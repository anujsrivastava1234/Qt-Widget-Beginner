#include <QCoreApplication>
#include <QDebug>
#include <QDate>
#include <QChar>
#include <QRect>
#include <QPoint>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    qDebug() << "Hello, World!";
    qDebug() << "Date : " << QDate::currentDate();
    qDebug() << QString("String") << QChar('X') << " Rect : " << QRect(100, 200, 40, 40);

    QPoint coordinate = QPoint(10, 20);
    qDebug() << "coordinate : " << coordinate;
    return a.exec();
}

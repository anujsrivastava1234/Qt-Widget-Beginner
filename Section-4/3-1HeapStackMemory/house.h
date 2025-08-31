#ifndef HOUSE_H
#define HOUSE_H

#include <QObject>
#include <QDebug>
class House : public QObject
{
    Q_OBJECT
public:
    explicit House(QObject *parent = nullptr, const QString &descr = "");
    ~House();
    void get_info();

private:
    QString m_descr;
};

#endif // HOUSE_H

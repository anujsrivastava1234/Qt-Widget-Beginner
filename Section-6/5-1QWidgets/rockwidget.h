#ifndef ROCKWIDGET_H
#define ROCKWIDGET_H

#include <QWidget>
#include <QMessageBox>

class RockWidget : public QWidget
{
    Q_OBJECT
public:
    explicit RockWidget(QWidget *parent = nullptr);

signals:

public slots:
    void on_button_clicked();
    // QWidget interface
public:
    QSize sizeHint() const;
};

#endif // ROCKWIDGET_H

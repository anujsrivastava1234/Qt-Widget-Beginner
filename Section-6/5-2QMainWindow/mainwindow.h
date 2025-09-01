#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QAction>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    // QWidget interface
public:
    QSize sizeHint() const;
    void quit_triggerred();
private:
    QAction *quitAction;


};
#endif // MAINWINDOW_H

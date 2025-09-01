#include "mainwindow.h"
#include <QPushButton>
#include <QApplication>
#include <QMenuBar>
#include <QMenu>
#include <QStatusBar>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    quitAction = new QAction("Quit");
    QPushButton *centralButton = new QPushButton("Click Me", this);
    setCentralWidget(centralButton);

    connect(quitAction, &QAction::triggered, this, &MainWindow::quit_triggerred);

    //setup a menu Bar
    QMenu *fileMenu;
    fileMenu = menuBar()->addMenu("File");
    fileMenu->addAction(quitAction);

    menuBar()->addMenu("Edit");
    menuBar()->addMenu("Window");
    menuBar()->addMenu("Settings");
    menuBar()->addMenu("Help");

    statusBar()->showMessage("Uploading file...", 3000);
 }

MainWindow::~MainWindow() {}

QSize MainWindow::sizeHint() const
{
    return QSize(640, 480);
}

void MainWindow::quit_triggerred()
{
    QApplication::quit();
}

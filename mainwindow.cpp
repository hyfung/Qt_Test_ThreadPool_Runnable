#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    threadPool = new QThreadPool(this);
    threadPool->setMaxThreadCount(4);
    QRunnable *runnables[10];

    for(int i=0;i<10;i++)
    {
        runnables[i] = new MyRunnable(i);
        threadPool->start(runnables[i]);
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

#include "myrunnable.h"

MyRunnable::MyRunnable(int id) : id(id)
{

}

void MyRunnable::run()
{
    QThread::msleep(1000);
    qDebug() << id;
}

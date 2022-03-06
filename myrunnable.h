#ifndef MYRUNNABLE_H
#define MYRUNNABLE_H

#include <QRunnable>
#include <QObject>
#include <QDebug>
#include <QThread>

class MyRunnable : public QRunnable
{
//    Q_OBJECT
public:
    MyRunnable(int id);
    void run() override;
private:
    int id;
};

#endif // MYRUNNABLE_H

#ifndef MYTHREAD_H
#define MYTHREAD_H
#include <QThread>

class MyThread : public QThread {
public:
    explicit MyThread(QString threadName);
    void run();
private:
    QString name;
};
#endif // MYTHREAD_H

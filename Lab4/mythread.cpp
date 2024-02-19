#include "mythread.h"
#include <QDebug>

MyThread::MyThread(QString threadName) : name(threadName) {}
void MyThread::run() {
    for (int i = 0; i <= 100; i++ ) {
        qDebug() << "1BST22019:" << name << " " << i;
    }
}

#include <QCoreApplication>
#include "mythread.h"
int main(int argc, char *argv[]) {
    QCoreApplication a(argc, argv);
    MyThread threadA("thread A");
    MyThread threadB("thread B");
    MyThread threadC("thread C");
    threadA.start();
    threadB.start();
    threadC.start();
    return a.exec();
}

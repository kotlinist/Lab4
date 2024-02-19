#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QThread>
#include "exampleobject.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class mainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_write_1_clicked(); // Слот для записи данных из lineEdit_1 в первый объект первого потока
    void on_write_2_clicked(); // Слот для записи данных из lineEdit_2 во второй объект второго потока
    void on_start_clicked();   // Слот для запуска потоков
    void on_stop_clicked();    // Слот для остановки потоков

    void on_btnWrite1_clicked();

    void on_btnWrite2_clicked();

    void on_btnStart_clicked();

    void on_btnStop_clicked();

private:
    Ui::mainWindow *ui;
    QThread thread_1;      // Первый поток
    QThread thread_2;      // Второй поток
    ExampleObject exampleObject_1;  // первый объект, который будет работать в первом потоке
    ExampleObject exampleObject_2;  // второй объект, который будет работать во втором потоке
};
#endif // MAINWINDOW_H

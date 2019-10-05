#include "mainwindow.h"

#include <QApplication>

/**
 * @brief ejecuta el programa
 * @param argc parametro estandar de C++
 * @param argv[] parametro estandar de C++
 * @return es estado de la ejecucion del programa
 */

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}

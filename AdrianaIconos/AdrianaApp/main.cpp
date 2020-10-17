#include "mainwindow.h"
#include "Requirente.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    REQUIRENTE r;
    r.setMinimumSize(200,300);
    r.show();
w.setMinimumSize(200,300);
w.show();
    return a.exec();
}

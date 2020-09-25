#include "ventana.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Ventana w;
    w.show();
    w.resize(400,200);
    return a.exec();
}

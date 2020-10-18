#include "observaciones.h"
#include "ui_observaciones.h"
#include <QDebug>
Observaciones::Observaciones(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Observaciones)
{
    qDebug()<<"Requridoasd";
    this->setMinimumSize(300,400);
    qDebug()<<"el pepe2";

    ui->setupUi(this);
}

Observaciones::~Observaciones()
{
    delete ui;
}

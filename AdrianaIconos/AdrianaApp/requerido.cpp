#include "requerido.h"
#include "ui_requerido.h"

Requerido::Requerido(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Requerido)
{
    ui->setupUi(this);
}

Requerido::~Requerido()
{
    delete ui;
}

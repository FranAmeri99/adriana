#include "Requirente.h"
#include "ui_Requierente.h"

REQUIRENTE::REQUIRENTE(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Formulario)
{
    ui->setupUi(this);
}

REQUIRENTE::~REQUIRENTE()
{
    delete ui;
}

#include "general.h"
#include "ui_general.h"
#include "mainwindow.h"
#include <QDebug>
#include <QFileDialog>
General::General(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::General)
{
   // ui->dFecha1->setDisplayFormat("yyyy-MM-dd");
    this->setMinimumSize(300,400);
    ui->setupUi(this);
}

General::~General()
{
    delete ui;
}

void General::on_pushButton_clicked()
{

    QFile archivo;
    QTextStream io;
    QString nombre = "../db/Insertar.txt";
    archivo.setFileName(nombre);
    archivo.open(QIODevice::WriteOnly | QIODevice::Text);
    io.setDevice(&archivo);
    qDebug()<<"hora: ui->dFecha1"<< ui->dFecha1->text();
    io << "<div style=\"position:absolute;left:72.10px;top:118.61px\" class=\"cls_003\"><span class=\"cls_003\">Legajo N°" << ui->lLegajo << "</span></div>";
    io << "<div style=\"position:absolute;left:72.10px;top:134.71px\" class=\"cls_003\"><span class=\"cls_003\">Autos  “"<<ui->lAutos<<"</span></div>";
    io << "<div style=\"position:absolute;left:72.10px;top:150.81px\" class=\"cls_003\"><span class=\"cls_003\"> - Etapa "<<ui->lEtapa<<"”</span></div>";
    io << "<div style=\"position:absolute;left:72.10px;top:183.01px\" class=\"cls_004\"><span class=\"cls_004\">Acuerdos Reglamentarios N° "<< ui->lAcuerdo1 <<" Serie “"<<ui->lSerie<<"” del "<<ui->dFecha1->text()<<" y N°"<< ui->lAcuerdo2 <<" </span></div>";

    io <<" <div style=\"position:absolute;left:72.10px;top:199.11px\" class=\"cls_004\"><span class=\"cls_004\">Serie “"<<ui->lSerie2<<"” del "<<ui->dFecha2->text() <<" .</span></div>";
    io <<" <div style=\"position:absolute;left:72.10px;top:215.21px\" class=\"cls_004\"><span class=\"cls_004\">Hora de inicio: "<<ui->tInicio->text() <<" hs.</span></div>";
    io <<" <div style=\"position:absolute;left:72.10px;top:231.31px\" class=\"cls_004\"><span class=\"cls_004\">Hora de finalización:</span></div>";
    io <<" <div style=\"position:absolute;left:210.39px;top:231.31px\" class=\"cls_004\"><span class=\"cls_004\">"<<ui->tFin->text()<<" hs</span></div>";
    io <<" <div style=\"position:absolute;left:72.10px;top:247.41px\" class=\"cls_003\"><span class=\"cls_003\">NUEVA REUNIÓN:  EDICION_12</span></div>";
    archivo.close();
}


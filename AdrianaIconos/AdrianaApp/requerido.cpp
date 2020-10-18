#include "requerido.h"
#include "ui_requerido.h"
#include <QFile>
#include <QTextStream>

Requerido::Requerido(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Requerido)
{
    this->setMinimumSize(300,400);
    ui->setupUi(this);
    ui->lRequerido->setMaximumHeight(30);

}

Requerido::~Requerido()
{
    delete ui;
}

void Requerido::on_pushButton_clicked()
{
    QFile archivo;
    QTextStream io;
    QString nombre = "../db/Insertar.txt";
    archivo.setFileName(nombre);
    archivo.open(QIODevice::WriteOnly | QIODevice::Text);
    io.setDevice(&archivo);
    io << "<div style=\"position:absolute;left:72.10px;top:440.61px\" class=\"cls_003\"><span class=\"cls_003\">REQUERIDO: "<<ui->lRequerido<<"</span></div>";
    io << "<div style=\"position:absolute;left:72.10px;top:456.71px\" class=\"cls_004\"><span class=\"cls_004\">CUIT: "<<ui->lDNI<<"</span></div>";
    io << "<div style=\"position:absolute;left:72.10px;top:472.81px\" class=\"cls_004\"><span class=\"cls_004\">Apoderado: "<<ui->lAPoderado<<"</span></div>";
    io << "<div style=\"position:absolute;left:72.10px;top:488.91px\" class=\"cls_004\"><span class=\"cls_004\">DNI: "<<ui->lDNI<<"</span></div>";
    io << "<div style=\"position:absolute;left:72.10px;top:505.01px\" class=\"cls_004\"><span class=\"cls_004\">Domicilio real:  "<<ui->lDomicilioReal<<"</span></div>";
    io << "<div style=\"position:absolute;left:72.10px;top:521.11px\" class=\"cls_004\"><span class=\"cls_004\">Correo electrónico: "<<ui->lCorreo1<<"</span></div>";
    io << "<div style=\"position:absolute;left:72.10px;top:537.21px\" class=\"cls_004\"><span class=\"cls_004\">Celular con whatsapp: "<<ui->lCelularWtp1<<"</span></div>";
    io << "<div style=\"position:absolute;left:72.10px;top:553.31px\" class=\"cls_003\"><span class=\"cls_003\">Letrado  Patrocinante:  "<<ui->lPatrocinante<<"</span></div>";
    io << "<div style=\"position:absolute;left:475.05px;top:553.31px\" class=\"cls_003\"><span class=\"cls_003\">Mat.  "<<ui->lMat<<"</span></div>";
    io << "<div style=\"position:absolute;left:72.10px;top:585.51px\" class=\"cls_004\"><span class=\"cls_004\">Domicilio legal: "<<ui->lDomicilioLegal<<"</span></div>";
    io << "<div style=\"position:absolute;left:72.10px;top:601.61px\" class=\"cls_004\"><span class=\"cls_004\">Correo electrónico: "<<ui->lCorreo2<<"</span></div>";
    io << "<div style=\"position:absolute;left:72.10px;top:617.71px\" class=\"cls_004\"><span class=\"cls_004\">Celular con whatsapp: "<<ui->lCelularWtp2<<"</span></div>";
    archivo.close();
}

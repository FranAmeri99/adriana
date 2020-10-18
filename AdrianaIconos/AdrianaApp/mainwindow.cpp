#include "mainwindow.h"

#include <QDebug>
#include <QFile>
#include <QFileDevice>
#include <QFileDialog>
#include <QTextStream>

MainWindow::MainWindow( QWidget *parent ): QMainWindow( parent ), ui( new Ui::MainWindow ){

    this->setMinimumSize( 300 , 400 );
    ui->setupUi( this );
    QFile * Insertar = new QFile;
    Insertar->setFileName("../Insertar.txt");
    Insertar->open(QIODevice::ReadWrite|QIODevice::Text);
    if (!Insertar->isOpen()){
        qDebug()<<"No se pudo abrir insertar";
    }
    QByteArray html;
    html.append("<html>"
                "<head><meta http-equiv=Content-Type content= \"text/html; charset=UTF-8 \">"
                "<style type= \"text/css \">"
                "<!--"
                "span.cls_002{font-family: \"Liberation Sans Narrow Bold \",serif;font-size:11.2px;color:rgb(0,0,0);font-weight:bold;font-style:normal;text-decoration: none}"
                "div.cls_002{font-family: \"Liberation Sans Narrow Bold \",serif;font-size:11.2px;color:rgb(0,0,0);font-weight:bold;font-style:normal;text-decoration: none}"
                "span.cls_003{font-family: \"Liberation Sans Narrow Bold \",serif;font-size:14.1px;color:rgb(0,0,0);font-weight:bold;font-style:normal;text-decoration: none}"
                "div.cls_003{font-family: \"Liberation Sans Narrow Bold \",serif;font-size:14.1px;color:rgb(0,0,0);font-weight:bold;font-style:normal;text-decoration: none}"
                "span.cls_004{font-family: \"Liberation Sans Narrow \",serif;font-size:14.1px;color:rgb(0,0,0);font-weight:normal;font-style:normal;text-decoration: none}"
                "div.cls_004{font-family: \"Liberation Sans Narrow \",serif;font-size:14.1px;color:rgb(0,0,0);font-weight:normal;font-style:normal;text-decoration: none}"
                "span.cls_007{font-family: \"Liberation Sans Narrow \",serif;font-size:14.1px;color:rgb(0,0,255);font-weight:normal;font-style:normal;text-decoration: underline}"
                "2div.cls_007{font-family: \"Liberation Sans Narrow \",serif;font-size:14.1px;color:rgb(0,0,255);font-weight:normal;font-style:normal;text-decoration: none}"
                "span.cls_006{font-family: \"DejaVu Sans Condensed \",serif;font-size:14.1px;color:rgb(0,0,0);font-weight:normal;font-style:normal;text-decoration: none}"
                "div.cls_006{font-family: \"DejaVu Sans Condensed \",serif;font-size:14.1px;color:rgb(0,0,0);font-weight:normal;font-style:normal;text-decoration: none}"
                "-->"
                "</style>"
                "<script type= \"text/javascript \" src= \"d7ee9678-10be-11eb-8b25-0cc47a792c0a_id_d7ee9678-10be-11eb-8b25-0cc47a792c0a_files/wz_jsgraphics.js \"></script>"
                "</head>"
                "<body>"
                "<div style= \"position:absolute;left:50%;margin-left:-297px;top:0px;width:595px;height:841px;border-style:outset;overflow:hidden \">"
                "<div style= \"position:absolute;left:0px;top:0px \">"
                "</div>"
                "<div style=\"position:absolute;left:72.10px;top:70.31px\" class=\"cls_002\"><span class=\"cls_002\">FORMULARIO</span><span class=\"cls_003\"> </span><span class=\"cls_002\">DE</span><span class=\"cls_003\"> </span><span class=\"cls_002\">ACREDITACIÓN</span><span class=\"cls_003\"> </span><span class=\"cls_002\">Y</span><span class=\"cls_003\">/</span><span class=\"cls_002\">O</span><span class=\"cls_003\"> </span><span class=\"cls_002\">FIJACIÓN</span><span class=\"cls_003\"> </span><span class=\"cls_002\">DE</span><span class=\"cls_003\"> </span><span class=\"cls_002\">NUEVO</span><span class=\"cls_003\"> </span><span class=\"cls_002\">DÍA</span><span class=\"cls_003\"> </span><span class=\"cls_002\">Y</span><span class=\"cls_003\"> </span><span class=\"cls_002\">HORA</span><span class=\"cls_003\"> </span><span class=\"cls_002\">DE</span></div>"
                "<div style=\"position:absolute;left:72.10px;top:86.41px\" class=\"cls_002\"><span class=\"cls_002\">REUNIÓN</span><span class=\"cls_003\"> </span><span class=\"cls_002\">BAJO</span><span class=\"cls_003\"> </span><span class=\"cls_002\">MODALIDAD</span><span class=\"cls_003\"> </span><span class=\"cls_002\">VIRTUAL</span><span class=\"cls_003\">.</span></div>"
                );
    Insertar->write(html);
    Insertar->close();

}

MainWindow::~MainWindow(){
    delete ui;
}

void MainWindow::on_actionGuardar_Como_triggered(){
    QFile archivo;
    QTextStream io;
    QString nombre;
    nombre = QFileDialog::getSaveFileName(this, "Guardar");
    archivo.setFileName(nombre);
    archivo.open(QIODevice::WriteOnly | QIODevice::Text);
    io.setDevice(&archivo);
    io << "el pepe";
    archivo.close();
}

void MainWindow::on_pbRequirente_clicked(){
//    requirente = new Requirente;
//    requirente->resize(200,300);
//    requirente->show();

}

void MainWindow::on_pbRequerido_clicked()
{
    requerido = new Requerido;
    requerido->resize(200,300);
    requerido->show();

}

void MainWindow::on_pbObservacion_clicked()
{
    qDebug()<<"el pepe2";
    observaciones = new Observaciones;
    observaciones->resize(200,300);
    observaciones->show();
}

void MainWindow::on_actionNuevo_triggered(){ui->texto->clear();}
void MainWindow::on_actionMaximizar_triggered(){this->showMaximized();}
void MainWindow::on_actionMinimizar_triggered(){this->showMinimized();}
void MainWindow::on_actionCerrar_triggered(){close();}
void MainWindow::on_actionCopiar_triggered(){}
void MainWindow::on_actionCortar_triggered(){}
void MainWindow::on_actionPegar_triggered(){}
void MainWindow::on_actionAcerca_de_triggered(){}
void MainWindow::on_actionGuardar_triggered(){}
void MainWindow::on_pbGuardar_clicked(){on_actionGuardar_Como_triggered();}



void MainWindow::on_pbGeneral_clicked()
{
    qDebug()<<"el pepe2";
    general = new General;
    general->resize(200,300);
    general->show();
}

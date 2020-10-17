#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionGuardar_Como_triggered(){

}

void MainWindow::on_actionNuevo_triggered(){

}

void MainWindow::on_actionMaximizar_triggered(){
this->showMaximized();
}

void MainWindow::on_actionMinimizar_triggered(){
this->showMinimized();
}

void MainWindow::on_actionCerrar_triggered(){
close();
}

void MainWindow::on_actionCopiar_triggered(){
close();
}

void MainWindow::on_actionCortar_triggered(){

}

void MainWindow::on_actionPegar_triggered(){

}

void MainWindow::on_actionAcerca_de_triggered(){

}

void MainWindow::on_actionGuardar_triggered(){

}

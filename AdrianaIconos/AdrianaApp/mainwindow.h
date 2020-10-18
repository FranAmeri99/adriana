#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "ui_mainwindow.h"
//#include "requirente.h"
#include "requerido.h"
#include "observaciones.h"
#include "general.h"

#include <QMainWindow>
#include <QFile>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    static QFile * documento ;
    Requerido * requerido;
    //Requirente * requirente;
    Observaciones * observaciones;
    General* general;
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionGuardar_Como_triggered();

    void on_actionNuevo_triggered();

    void on_actionMaximizar_triggered();

    void on_actionMinimizar_triggered();

    void on_actionCerrar_triggered();

    void on_actionCopiar_triggered();

    void on_actionCortar_triggered();

    void on_actionPegar_triggered();

    void on_actionAcerca_de_triggered();

    void on_actionGuardar_triggered();

    void on_pbGuardar_clicked();

    void on_pbRequirente_clicked();

    void on_pbRequerido_clicked();

    void on_pbObservacion_clicked();




    void on_pbGeneral_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H

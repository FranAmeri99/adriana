#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
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

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H

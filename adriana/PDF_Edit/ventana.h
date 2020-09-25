#ifndef VENTANA_H
#define VENTANA_H

#include <QWidget>
#include <QLineEdit>
#include <QGridLayout>
#include <QPushButton>
#include <QTextEdit>
#include <QPrinter>
#include <QDebug>
#include <QLabel>
class Ventana : public QWidget
{
    Q_OBJECT

public:
    Ventana(QWidget *parent = nullptr);
    ~Ventana();

private:
    QLineEdit * LNombreDoc;
    QLabel *LaNombreDoc;
    QLineEdit * LNombre;
    QLabel *laNombre;
    QLineEdit * LApellido;
    QLabel *laApellido;
    QDate * Lfecha;
    QPushButton * pb;
    QGridLayout * layout;
    QLineEdit * visualizar;
    QTextEdit * text;
private slots:
    void slot_editar();
};
#endif // VENTANA_H

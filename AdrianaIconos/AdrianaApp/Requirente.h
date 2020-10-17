#ifndef FORMULARIO_H
#define FORMULARIO_H

#include <QWidget>

namespace Ui {
class Formulario;
}

class REQUIRENTE : public QWidget
{
    Q_OBJECT

public:
    explicit REQUIRENTE(QWidget *parent = nullptr);
    ~REQUIRENTE();

private:
    Ui::Formulario *ui;
};

#endif // FORMULARIO_H

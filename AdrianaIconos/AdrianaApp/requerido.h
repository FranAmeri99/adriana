#ifndef REQUERIDO_H
#define REQUERIDO_H

#include <QWidget>

namespace Ui {
class Requerido;
}

class Requerido : public QWidget
{
    Q_OBJECT

public:
    explicit Requerido(QWidget *parent = nullptr);
    ~Requerido();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Requerido *ui;
};

#endif // REQUERIDO_H

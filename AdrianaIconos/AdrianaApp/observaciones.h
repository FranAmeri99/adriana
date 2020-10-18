#ifndef OBSERVACIONES_H
#define OBSERVACIONES_H

#include <QMainWindow>

namespace Ui {
class Observaciones;
}

class Observaciones : public QMainWindow
{
    Q_OBJECT

public:
    explicit Observaciones(QWidget *parent = nullptr);
    ~Observaciones();

private:
    Ui::Observaciones *ui;
};

#endif // OBSERVACIONES_H

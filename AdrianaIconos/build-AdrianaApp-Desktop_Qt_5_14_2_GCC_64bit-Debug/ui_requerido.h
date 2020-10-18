/********************************************************************************
** Form generated from reading UI file 'requerido.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REQUERIDO_H
#define UI_REQUERIDO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Requerido
{
public:
    QGridLayout *gridLayout;
    QLabel *ltitulo;
    QLineEdit *lCorreo1;
    QLabel *label_12;
    QLabel *label_10;
    QLineEdit *lCorreo2;
    QLabel *label_2;
    QFrame *linea;
    QLabel *label_7;
    QLabel *label_9;
    QLineEdit *lAPoderado;
    QLineEdit *lCelularWtp2;
    QLabel *label_3;
    QLineEdit *lCelularWtp1;
    QPushButton *pushButton;
    QLineEdit *lDNI;
    QLineEdit *lCUIT;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_8;
    QLineEdit *lRequerido;
    QLabel *label_11;
    QLabel *label_5;
    QLineEdit *lDomicilioLegal;
    QFrame *line_3;
    QLabel *label_6;
    QLineEdit *lDomicilioReal;
    QLineEdit *lPatrocinante;
    QLineEdit *lMat;

    void setupUi(QWidget *Requerido)
    {
        if (Requerido->objectName().isEmpty())
            Requerido->setObjectName(QString::fromUtf8("Requerido"));
        Requerido->resize(436, 456);
        gridLayout = new QGridLayout(Requerido);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        ltitulo = new QLabel(Requerido);
        ltitulo->setObjectName(QString::fromUtf8("ltitulo"));
        ltitulo->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(ltitulo, 0, 0, 1, 2);

        lCorreo1 = new QLineEdit(Requerido);
        lCorreo1->setObjectName(QString::fromUtf8("lCorreo1"));

        gridLayout->addWidget(lCorreo1, 8, 1, 1, 1);

        label_12 = new QLabel(Requerido);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout->addWidget(label_12, 16, 0, 1, 1);

        label_10 = new QLabel(Requerido);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout->addWidget(label_10, 14, 0, 1, 1);

        lCorreo2 = new QLineEdit(Requerido);
        lCorreo2->setObjectName(QString::fromUtf8("lCorreo2"));

        gridLayout->addWidget(lCorreo2, 15, 1, 1, 1);

        label_2 = new QLabel(Requerido);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 5, 0, 1, 1);

        linea = new QFrame(Requerido);
        linea->setObjectName(QString::fromUtf8("linea"));
        linea->setFrameShape(QFrame::HLine);
        linea->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(linea, 10, 0, 1, 2);

        label_7 = new QLabel(Requerido);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 8, 0, 1, 1);

        label_9 = new QLabel(Requerido);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 12, 0, 1, 1);

        lAPoderado = new QLineEdit(Requerido);
        lAPoderado->setObjectName(QString::fromUtf8("lAPoderado"));

        gridLayout->addWidget(lAPoderado, 5, 1, 1, 1);

        lCelularWtp2 = new QLineEdit(Requerido);
        lCelularWtp2->setObjectName(QString::fromUtf8("lCelularWtp2"));

        gridLayout->addWidget(lCelularWtp2, 16, 1, 1, 1);

        label_3 = new QLabel(Requerido);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        lCelularWtp1 = new QLineEdit(Requerido);
        lCelularWtp1->setObjectName(QString::fromUtf8("lCelularWtp1"));

        gridLayout->addWidget(lCelularWtp1, 9, 1, 1, 1);

        pushButton = new QPushButton(Requerido);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 17, 0, 1, 2);

        lDNI = new QLineEdit(Requerido);
        lDNI->setObjectName(QString::fromUtf8("lDNI"));

        gridLayout->addWidget(lDNI, 6, 1, 1, 1);

        lCUIT = new QLineEdit(Requerido);
        lCUIT->setObjectName(QString::fromUtf8("lCUIT"));

        gridLayout->addWidget(lCUIT, 3, 1, 1, 1);

        label = new QLabel(Requerido);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 9, 0, 1, 1);

        label_4 = new QLabel(Requerido);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        label_8 = new QLabel(Requerido);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 11, 0, 1, 1);

        lRequerido = new QLineEdit(Requerido);
        lRequerido->setObjectName(QString::fromUtf8("lRequerido"));

        gridLayout->addWidget(lRequerido, 2, 1, 1, 1);

        label_11 = new QLabel(Requerido);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout->addWidget(label_11, 15, 0, 1, 1);

        label_5 = new QLabel(Requerido);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 6, 0, 1, 1);

        lDomicilioLegal = new QLineEdit(Requerido);
        lDomicilioLegal->setObjectName(QString::fromUtf8("lDomicilioLegal"));

        gridLayout->addWidget(lDomicilioLegal, 14, 1, 1, 1);

        line_3 = new QFrame(Requerido);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_3, 1, 0, 1, 2);

        label_6 = new QLabel(Requerido);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 7, 0, 1, 1);

        lDomicilioReal = new QLineEdit(Requerido);
        lDomicilioReal->setObjectName(QString::fromUtf8("lDomicilioReal"));

        gridLayout->addWidget(lDomicilioReal, 7, 1, 1, 1);

        lPatrocinante = new QLineEdit(Requerido);
        lPatrocinante->setObjectName(QString::fromUtf8("lPatrocinante"));

        gridLayout->addWidget(lPatrocinante, 11, 1, 1, 1);

        lMat = new QLineEdit(Requerido);
        lMat->setObjectName(QString::fromUtf8("lMat"));

        gridLayout->addWidget(lMat, 12, 1, 1, 1);

        QWidget::setTabOrder(lRequerido, lCUIT);
        QWidget::setTabOrder(lCUIT, lAPoderado);
        QWidget::setTabOrder(lAPoderado, lDNI);
        QWidget::setTabOrder(lDNI, lDomicilioReal);
        QWidget::setTabOrder(lDomicilioReal, lCorreo1);
        QWidget::setTabOrder(lCorreo1, lCelularWtp1);
        QWidget::setTabOrder(lCelularWtp1, lPatrocinante);
        QWidget::setTabOrder(lPatrocinante, lDomicilioLegal);
        QWidget::setTabOrder(lDomicilioLegal, lCorreo2);
        QWidget::setTabOrder(lCorreo2, lCelularWtp2);
        QWidget::setTabOrder(lCelularWtp2, pushButton);

        retranslateUi(Requerido);

        QMetaObject::connectSlotsByName(Requerido);
    } // setupUi

    void retranslateUi(QWidget *Requerido)
    {
        Requerido->setWindowTitle(QCoreApplication::translate("Requerido", "Form", nullptr));
        ltitulo->setText(QCoreApplication::translate("Requerido", "REQUERIDO:", nullptr));
        label_12->setText(QCoreApplication::translate("Requerido", "Celular con whatsapp:", nullptr));
        label_10->setText(QCoreApplication::translate("Requerido", "Domicilio legal:", nullptr));
        label_2->setText(QCoreApplication::translate("Requerido", "Apoderado:", nullptr));
        label_7->setText(QCoreApplication::translate("Requerido", "Correo electr\303\263nico:", nullptr));
        label_9->setText(QCoreApplication::translate("Requerido", "Mat.", nullptr));
        label_3->setText(QCoreApplication::translate("Requerido", "CUIT:", nullptr));
        pushButton->setText(QCoreApplication::translate("Requerido", "Guardar", nullptr));
        label->setText(QCoreApplication::translate("Requerido", "Celular con whatsapp:", nullptr));
        label_4->setText(QCoreApplication::translate("Requerido", "REQUERIDO:", nullptr));
        label_8->setText(QCoreApplication::translate("Requerido", "Letrado Patrocinante:", nullptr));
        label_11->setText(QCoreApplication::translate("Requerido", "Correo electr\303\263nico:", nullptr));
        label_5->setText(QCoreApplication::translate("Requerido", "DNI:", nullptr));
        label_6->setText(QCoreApplication::translate("Requerido", "Domicilio real:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Requerido: public Ui_Requerido {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REQUERIDO_H

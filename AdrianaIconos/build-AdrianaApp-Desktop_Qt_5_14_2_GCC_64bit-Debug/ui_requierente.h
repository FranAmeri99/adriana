/********************************************************************************
** Form generated from reading UI file 'requierente.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REQUIERENTE_H
#define UI_REQUIERENTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Formulario
{
public:
    QGridLayout *gridLayout;
    QLabel *label_6;
    QLabel *label_5;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_6;
    QLabel *label_8;
    QLineEdit *lineEdit_7;
    QLabel *label_9;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_9;
    QLabel *label_10;
    QLabel *label_3;
    QLineEdit *lineEdit_4;
    QLabel *label_7;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_8;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QFrame *line;
    QLabel *label_11;
    QLineEdit *lineEdit_10;
    QPushButton *pushButton;

    void setupUi(QWidget *Formulario)
    {
        if (Formulario->objectName().isEmpty())
            Formulario->setObjectName(QString::fromUtf8("Formulario"));
        Formulario->resize(400, 385);
        gridLayout = new QGridLayout(Formulario);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_6 = new QLabel(Formulario);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 10, 0, 1, 1);

        label_5 = new QLabel(Formulario);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 11, 0, 1, 1);

        lineEdit_2 = new QLineEdit(Formulario);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        gridLayout->addWidget(lineEdit_2, 3, 1, 1, 1);

        lineEdit_3 = new QLineEdit(Formulario);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        gridLayout->addWidget(lineEdit_3, 4, 1, 1, 1);

        lineEdit_6 = new QLineEdit(Formulario);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));

        gridLayout->addWidget(lineEdit_6, 7, 1, 1, 1);

        label_8 = new QLabel(Formulario);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 8, 0, 1, 1);

        lineEdit_7 = new QLineEdit(Formulario);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));

        gridLayout->addWidget(lineEdit_7, 8, 1, 1, 1);

        label_9 = new QLabel(Formulario);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 6, 0, 1, 1);

        lineEdit_5 = new QLineEdit(Formulario);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));

        gridLayout->addWidget(lineEdit_5, 6, 1, 1, 1);

        lineEdit_9 = new QLineEdit(Formulario);
        lineEdit_9->setObjectName(QString::fromUtf8("lineEdit_9"));

        gridLayout->addWidget(lineEdit_9, 11, 1, 1, 1);

        label_10 = new QLabel(Formulario);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout->addWidget(label_10, 5, 0, 1, 1);

        label_3 = new QLabel(Formulario);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 4, 0, 1, 1);

        lineEdit_4 = new QLineEdit(Formulario);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        gridLayout->addWidget(lineEdit_4, 5, 1, 1, 1);

        label_7 = new QLabel(Formulario);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 9, 0, 1, 1);

        label = new QLabel(Formulario);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 3, 0, 1, 1);

        label_2 = new QLabel(Formulario);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        lineEdit_8 = new QLineEdit(Formulario);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));

        gridLayout->addWidget(lineEdit_8, 10, 1, 1, 1);

        label_4 = new QLabel(Formulario);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 7, 0, 1, 1);

        lineEdit = new QLineEdit(Formulario);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 2, 1, 1, 1);

        line = new QFrame(Formulario);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 1, 0, 1, 2);

        label_11 = new QLabel(Formulario);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFocusPolicy(Qt::NoFocus);
        label_11->setLayoutDirection(Qt::RightToLeft);
        label_11->setTextFormat(Qt::MarkdownText);
        label_11->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_11, 0, 0, 1, 2);

        lineEdit_10 = new QLineEdit(Formulario);
        lineEdit_10->setObjectName(QString::fromUtf8("lineEdit_10"));

        gridLayout->addWidget(lineEdit_10, 9, 1, 1, 1);

        pushButton = new QPushButton(Formulario);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 12, 0, 1, 2);

        QWidget::setTabOrder(lineEdit, lineEdit_2);
        QWidget::setTabOrder(lineEdit_2, lineEdit_3);
        QWidget::setTabOrder(lineEdit_3, lineEdit_4);
        QWidget::setTabOrder(lineEdit_4, lineEdit_5);
        QWidget::setTabOrder(lineEdit_5, lineEdit_6);
        QWidget::setTabOrder(lineEdit_6, lineEdit_7);
        QWidget::setTabOrder(lineEdit_7, lineEdit_10);
        QWidget::setTabOrder(lineEdit_10, lineEdit_8);
        QWidget::setTabOrder(lineEdit_8, lineEdit_9);
        QWidget::setTabOrder(lineEdit_9, pushButton);

        retranslateUi(Formulario);

        QMetaObject::connectSlotsByName(Formulario);
    } // setupUi

    void retranslateUi(QWidget *Formulario)
    {
        Formulario->setWindowTitle(QCoreApplication::translate("Formulario", "Form", nullptr));
        label_6->setText(QCoreApplication::translate("Formulario", "Tel\303\251fono fijo:", nullptr));
        label_5->setText(QCoreApplication::translate("Formulario", "Celular con whatsapp:", nullptr));
        label_8->setText(QCoreApplication::translate("Formulario", "Domicilio legal:", nullptr));
        label_9->setText(QCoreApplication::translate("Formulario", "Letrado Apoderado:", nullptr));
        label_10->setText(QCoreApplication::translate("Formulario", "Correo electr\303\263nico:", nullptr));
        label_3->setText(QCoreApplication::translate("Formulario", "Domicilio real: ", nullptr));
        label_7->setText(QCoreApplication::translate("Formulario", "Correo electr\303\263nico:", nullptr));
        label->setText(QCoreApplication::translate("Formulario", "CUIT:", nullptr));
        label_2->setText(QCoreApplication::translate("Formulario", "REQUIRENTE:", nullptr));
        label_4->setText(QCoreApplication::translate("Formulario", "Mat.", nullptr));
        label_11->setText(QCoreApplication::translate("Formulario", "REQUIRENTE", nullptr));
        pushButton->setText(QCoreApplication::translate("Formulario", "GUARDAR", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Formulario: public Ui_Formulario {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REQUIERENTE_H

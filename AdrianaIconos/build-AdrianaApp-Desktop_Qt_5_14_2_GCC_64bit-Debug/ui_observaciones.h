/********************************************************************************
** Form generated from reading UI file 'observaciones.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OBSERVACIONES_H
#define UI_OBSERVACIONES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Observaciones
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Observaciones)
    {
        if (Observaciones->objectName().isEmpty())
            Observaciones->setObjectName(QString::fromUtf8("Observaciones"));
        Observaciones->resize(683, 400);
        centralwidget = new QWidget(Observaciones);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        gridLayout->addWidget(textEdit, 0, 0, 1, 1);

        Observaciones->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Observaciones);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 683, 22));
        Observaciones->setMenuBar(menubar);
        statusbar = new QStatusBar(Observaciones);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Observaciones->setStatusBar(statusbar);

        retranslateUi(Observaciones);

        QMetaObject::connectSlotsByName(Observaciones);
    } // setupUi

    void retranslateUi(QMainWindow *Observaciones)
    {
        Observaciones->setWindowTitle(QCoreApplication::translate("Observaciones", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Observaciones: public Ui_Observaciones {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OBSERVACIONES_H

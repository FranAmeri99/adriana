/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionGuardar_Como;
    QAction *actionNuevo;
    QAction *actionMaximizar;
    QAction *actionMinimizar;
    QAction *actionCerrar;
    QAction *actionCopiar;
    QAction *actionCortar;
    QAction *actionPegar;
    QAction *actionAcerca_de;
    QAction *actionGuardar;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QTextBrowser *texto;
    QPushButton *pbGuardar;
    QGridLayout *gridLayout_2;
    QPushButton *pbObservacion;
    QPushButton *pbRequerido;
    QPushButton *pbRequirente;
    QPushButton *pbGeneral;
    QMenuBar *menubar;
    QMenu *menuArchivo;
    QMenu *menuEditar;
    QMenu *menuAyuda;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(473, 417);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/huevo.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionGuardar_Como = new QAction(MainWindow);
        actionGuardar_Como->setObjectName(QString::fromUtf8("actionGuardar_Como"));
        actionNuevo = new QAction(MainWindow);
        actionNuevo->setObjectName(QString::fromUtf8("actionNuevo"));
        actionMaximizar = new QAction(MainWindow);
        actionMaximizar->setObjectName(QString::fromUtf8("actionMaximizar"));
        actionMinimizar = new QAction(MainWindow);
        actionMinimizar->setObjectName(QString::fromUtf8("actionMinimizar"));
        actionCerrar = new QAction(MainWindow);
        actionCerrar->setObjectName(QString::fromUtf8("actionCerrar"));
        actionCopiar = new QAction(MainWindow);
        actionCopiar->setObjectName(QString::fromUtf8("actionCopiar"));
        actionCortar = new QAction(MainWindow);
        actionCortar->setObjectName(QString::fromUtf8("actionCortar"));
        actionPegar = new QAction(MainWindow);
        actionPegar->setObjectName(QString::fromUtf8("actionPegar"));
        actionAcerca_de = new QAction(MainWindow);
        actionAcerca_de->setObjectName(QString::fromUtf8("actionAcerca_de"));
        actionAcerca_de->setIcon(icon);
        actionGuardar = new QAction(MainWindow);
        actionGuardar->setObjectName(QString::fromUtf8("actionGuardar"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        texto = new QTextBrowser(centralwidget);
        texto->setObjectName(QString::fromUtf8("texto"));

        gridLayout->addWidget(texto, 0, 2, 1, 1);

        pbGuardar = new QPushButton(centralwidget);
        pbGuardar->setObjectName(QString::fromUtf8("pbGuardar"));

        gridLayout->addWidget(pbGuardar, 2, 0, 1, 3);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        pbObservacion = new QPushButton(centralwidget);
        pbObservacion->setObjectName(QString::fromUtf8("pbObservacion"));

        gridLayout_2->addWidget(pbObservacion, 3, 0, 1, 2);

        pbRequerido = new QPushButton(centralwidget);
        pbRequerido->setObjectName(QString::fromUtf8("pbRequerido"));

        gridLayout_2->addWidget(pbRequerido, 2, 0, 1, 2);

        pbRequirente = new QPushButton(centralwidget);
        pbRequirente->setObjectName(QString::fromUtf8("pbRequirente"));

        gridLayout_2->addWidget(pbRequirente, 1, 0, 1, 2);

        pbGeneral = new QPushButton(centralwidget);
        pbGeneral->setObjectName(QString::fromUtf8("pbGeneral"));

        gridLayout_2->addWidget(pbGeneral, 0, 0, 1, 2);


        gridLayout->addLayout(gridLayout_2, 0, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 473, 22));
        menuArchivo = new QMenu(menubar);
        menuArchivo->setObjectName(QString::fromUtf8("menuArchivo"));
        menuEditar = new QMenu(menubar);
        menuEditar->setObjectName(QString::fromUtf8("menuEditar"));
        menuAyuda = new QMenu(menubar);
        menuAyuda->setObjectName(QString::fromUtf8("menuAyuda"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);
        QWidget::setTabOrder(pbGeneral, pbRequirente);
        QWidget::setTabOrder(pbRequirente, pbRequerido);
        QWidget::setTabOrder(pbRequerido, pbObservacion);
        QWidget::setTabOrder(pbObservacion, pbGuardar);
        QWidget::setTabOrder(pbGuardar, texto);

        menubar->addAction(menuArchivo->menuAction());
        menubar->addAction(menuEditar->menuAction());
        menubar->addAction(menuAyuda->menuAction());
        menuArchivo->addAction(actionGuardar);
        menuArchivo->addAction(actionGuardar_Como);
        menuArchivo->addAction(actionNuevo);
        menuArchivo->addSeparator();
        menuArchivo->addAction(actionMaximizar);
        menuArchivo->addAction(actionMinimizar);
        menuArchivo->addSeparator();
        menuArchivo->addAction(actionCerrar);
        menuEditar->addAction(actionCopiar);
        menuEditar->addAction(actionCortar);
        menuEditar->addAction(actionPegar);
        menuAyuda->addAction(actionAcerca_de);
        toolBar->addAction(actionNuevo);
        toolBar->addAction(actionGuardar);
        toolBar->addAction(actionGuardar_Como);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Adriana App", nullptr));
        actionGuardar_Como->setText(QCoreApplication::translate("MainWindow", "Guardar Como ...", nullptr));
#if QT_CONFIG(shortcut)
        actionGuardar_Como->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionNuevo->setText(QCoreApplication::translate("MainWindow", "Nuevo", nullptr));
#if QT_CONFIG(shortcut)
        actionNuevo->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionMaximizar->setText(QCoreApplication::translate("MainWindow", "Maximizar", nullptr));
        actionMinimizar->setText(QCoreApplication::translate("MainWindow", "Minimizar", nullptr));
        actionCerrar->setText(QCoreApplication::translate("MainWindow", "Cerrar", nullptr));
#if QT_CONFIG(shortcut)
        actionCerrar->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Esc", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCopiar->setText(QCoreApplication::translate("MainWindow", "Copiar", nullptr));
#if QT_CONFIG(shortcut)
        actionCopiar->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCortar->setText(QCoreApplication::translate("MainWindow", "Cortar", nullptr));
#if QT_CONFIG(shortcut)
        actionCortar->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+X", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPegar->setText(QCoreApplication::translate("MainWindow", "Pegar", nullptr));
#if QT_CONFIG(shortcut)
        actionPegar->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+V", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAcerca_de->setText(QCoreApplication::translate("MainWindow", "Acerca de...", nullptr));
        actionGuardar->setText(QCoreApplication::translate("MainWindow", "Guardar", nullptr));
#if QT_CONFIG(shortcut)
        actionGuardar->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        pbGuardar->setText(QCoreApplication::translate("MainWindow", "Guardar", nullptr));
        pbObservacion->setText(QCoreApplication::translate("MainWindow", "Agregar Observacion", nullptr));
        pbRequerido->setText(QCoreApplication::translate("MainWindow", "Agregar Requerido", nullptr));
        pbRequirente->setText(QCoreApplication::translate("MainWindow", "Agregar Requirente", nullptr));
        pbGeneral->setText(QCoreApplication::translate("MainWindow", "Datos De Reunion", nullptr));
        menuArchivo->setTitle(QCoreApplication::translate("MainWindow", "Archivo", nullptr));
        menuEditar->setTitle(QCoreApplication::translate("MainWindow", "Editar", nullptr));
        menuAyuda->setTitle(QCoreApplication::translate("MainWindow", "Ayuda", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "Herramienta", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

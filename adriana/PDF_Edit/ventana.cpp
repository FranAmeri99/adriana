#include "ventana.h"

Ventana::Ventana(QWidget *parent)
    : QWidget(parent)
{
    this->setWindowTitle("Editor de PDF");
    layout = new QGridLayout();
    LNombreDoc = new QLineEdit;
    LaNombreDoc = new QLabel("Ingrese el Nombre del Documento: ");
    LNombre = new QLineEdit;
    laNombre = new QLabel("Ingrese el nombre: ");
    LApellido = new QLineEdit;
    laApellido = new QLabel("Ingrese el Apellido: ");
    pb = new QPushButton("Editar");
    LNombreDoc->setPlaceholderText("Titulo...");
    LNombre->setPlaceholderText("Nombre...");
    LApellido->setPlaceholderText("Apellido...");
    visualizar = new QLineEdit;
    text = new QTextEdit;
    layout->addWidget(text,0,4,4,4);
    layout->addWidget(LaNombreDoc,0,0,1,1);
    layout->addWidget(LNombreDoc,0,1,1,1);
    layout->addWidget(laNombre,1,0,1,1);
    layout->addWidget(LNombre,1,1,1,1);
    layout->addWidget(laApellido,2,0,1,1);
    layout->addWidget(LApellido,2,1,1,1);
    layout->addWidget(pb,4,0,1,2);
    connect( pb, SIGNAL( pressed( ) ), this, SLOT( slot_editar( ) ) );
    connect( LNombre, SIGNAL( editingFinished() ), this, SLOT( slot_editar( ) ) );
    connect( LApellido, SIGNAL( editingFinished() ), this, SLOT( slot_editar( ) ) );
    this->setLayout(layout);




}

Ventana::~Ventana()
{
}

void Ventana::slot_editar()
{
    QString html =
            "<div align=right>"
                  "City, 11/11/2015"
            "</div>"
            "<div align=left>"
                  "Sender Name<br>"
                  "street 34/56A<br>"
                  "121-43 city"
            "</div>"
            "<h1 align=center>";
            QString a = LNombre->text();
            html.push_back(a);
            a= "</h1>"
            "<p align=justify>"
                  "document content document content document content document content document content document content document content document content document content document content "
                  "document content document content document content document content document content document content document content document content document content document content "
            "</p>"
            "<div align=right>sincerly</div>";
            html.push_back(a);
            text->setHtml(html);
            QTextDocument document;
            document.setHtml(html);

            QPrinter printer(QPrinter::PrinterResolution);
            printer.setOutputFormat(QPrinter::PdfFormat);
            printer.setPaperSize(QPrinter::A4);

            printer.setOutputFileName("../"+ LNombreDoc->text()+ ".pdf");
            printer.setPageMargins(QMarginsF(15, 15, 15, 15));

            document.print(&printer);
            qDebug()<<"listo";

}


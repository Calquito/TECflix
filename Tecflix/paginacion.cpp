#include "paginacion.h"
#include "ui_paginacion.h"
#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/QNetworkReply>


Paginacion::Paginacion(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Paginacion)
{
    ui->setupUi(this);
}

Paginacion::~Paginacion()
{
    delete ui;
}


void Paginacion::on_pushButton_7_clicked()
{
    QUrl imageUrl("http://qt.digia.com/Documents/1/QtLogo.png");
    ui->pushButton_2->setText("2");
}

QUrl url("http://mydomain.com/images/image.jpg");








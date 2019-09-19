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


void downloadFinished(QNetworkReply *reply)
{
    QPixmap pm;
    pm.loadFromData(reply->readAll());
   // ui->pushButton_2->setText("2");
}

void Paginacion::on_pushButton_7_clicked()
{
    /*QNetworkAccessManager *nam = new QNetworkAccessManager(this);
    connect(nam, &QNetworkAccessManager::finished, this, &downloadFinished);
    const QUrl url = QUrl("http://computer/a.jpg");
    QNetworkRequest request(url);
    nam->get(request);*/


    /*QPixmap pixmap();
    QIcon ButtonIcon(pixmap);
    ui->pushButton->setIcon(ButtonIcon);
    ui->pushButton->setIconSize(pixmap.rect().size());*/

    ui->pushButton->setStyleSheet("border-image:url(https://m.media-amazon.com/images/M/MV5BMTU2NTYxODcwMF5BMl5BanBnXkFtZTcwNDk1NDY0Nw@@._V1_UX182_CR0,0,182,268_AL_.jpg);");

    ui->pushButton_2->setText("2");
}



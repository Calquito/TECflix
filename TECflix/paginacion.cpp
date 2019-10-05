#include "paginacion.h"
#include "ui_paginacion.h"
#include "streaming.h"
#include <sstream>
#include <iostream>
#include <fstream>
#include <stdio.h>
#include "abridor.h"
#include <QWebEngineHistory>
#include <QWebEngineHistoryItem>
#include <QWebEnginePage>
#include <QWebEngineView>
#include <QtWebEngineWidgets/QtWebEngineWidgets>
#include "memory_manager.h"
#include <string>

//5042
int pagina_1=1;
int pagina_2=2;
int pagina_3=3;
int pagina_4=4;
int pagina_5=5;


Paginacion::Paginacion(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Paginacion)
{
    ui->setupUi(this);
    int consumed_kb=getValue();
    ui->label_2->setText("En uso:"+QString::number(consumed_kb)+"kb");

}

Paginacion::~Paginacion()
{
    delete ui;
}

//funciones "globales"
void Paginacion::actualizar_memoria(){
    int consumed_kb=getValue();
    ui->label_2->setText("En uso:"+QString::number(consumed_kb)+"kb");
}

///////////////////////////////////////////////////////////////
//configurar iamgenes en los botones
void Paginacion::downloadFinished(QNetworkReply *reply)
{
    QPixmap pixmap;
    pixmap.loadFromData(reply->readAll());
    QIcon ButtonIcon(pixmap);
    ui->pushButton->setIcon(ButtonIcon);
    ui->pushButton->setIconSize(QSize(ui->pushButton->width(), ui->pushButton->height()));
}
void Paginacion::downloadFinished10(QNetworkReply *reply)
{
    QPixmap pixmap;
    pixmap.loadFromData(reply->readAll());
    QIcon ButtonIcon(pixmap);
    ui->pushButton_10->setIcon(ButtonIcon);
    ui->pushButton_10->setIconSize(QSize(ui->pushButton_10->width(), ui->pushButton_10->height()));
}
void Paginacion::downloadFinished11(QNetworkReply *reply)
{
    QPixmap pixmap;
    pixmap.loadFromData(reply->readAll());
    QIcon ButtonIcon(pixmap);
    ui->pushButton_11->setIcon(ButtonIcon);
    ui->pushButton_11->setIconSize(QSize(ui->pushButton_11->width(), ui->pushButton_11->height()));
}
void Paginacion::downloadFinished13(QNetworkReply *reply)
{
    QPixmap pixmap;
    pixmap.loadFromData(reply->readAll());
    QIcon ButtonIcon(pixmap);
    ui->pushButton_13->setIcon(ButtonIcon);
    ui->pushButton_13->setIconSize(QSize(ui->pushButton_13->width(), ui->pushButton_13->height()));
}
void Paginacion::downloadFinished9(QNetworkReply *reply)
{
    QPixmap pixmap;
    pixmap.loadFromData(reply->readAll());
    QIcon ButtonIcon(pixmap);
    ui->pushButton_9->setIcon(ButtonIcon);
    ui->pushButton_9->setIconSize(QSize(ui->pushButton_9->width(), ui->pushButton_9->height()));
}
void Paginacion::downloadFinished14(QNetworkReply *reply)
{
    QPixmap pixmap;
    pixmap.loadFromData(reply->readAll());
    QIcon ButtonIcon(pixmap);
    ui->pushButton_14->setIcon(ButtonIcon);
    ui->pushButton_14->setIconSize(QSize(ui->pushButton_14->width(), ui->pushButton_14->height()));
}
void Paginacion::downloadFinished12(QNetworkReply *reply)
{
    QPixmap pixmap;
    pixmap.loadFromData(reply->readAll());
    QIcon ButtonIcon(pixmap);
    ui->pushButton_12->setIcon(ButtonIcon);
    ui->pushButton_12->setIconSize(QSize(ui->pushButton_12->width(), ui->pushButton_12->height()));
}
void Paginacion::downloadFinished15(QNetworkReply *reply)
{
    QPixmap pixmap;
    pixmap.loadFromData(reply->readAll());
    QIcon ButtonIcon(pixmap);
    ui->pushButton_15->setIcon(ButtonIcon);
    ui->pushButton_15->setIconSize(QSize(ui->pushButton_15->width(), ui->pushButton_15->height()));
}
void Paginacion::downloadFinished16(QNetworkReply *reply)
{
    QPixmap pixmap;
    pixmap.loadFromData(reply->readAll());
    QIcon ButtonIcon(pixmap);
    ui->pushButton_16->setIcon(ButtonIcon);
    ui->pushButton_16->setIconSize(QSize(ui->pushButton_16->width(), ui->pushButton_16->height()));
}

void Paginacion::loadImage(){
    string image_url=get_line((pagina_3-1)*9 +1,1);
    QNetworkAccessManager *nam = new QNetworkAccessManager(this);
    connect(nam, &QNetworkAccessManager::finished, this, &Paginacion::downloadFinished);
    const QUrl url = QUrl(QString::fromStdString(image_url));
    QNetworkRequest request(url);
    nam->get(request);
}
void Paginacion::loadImage10(){
    string image_url=get_line((pagina_3-1)*9 +2,1);
    QNetworkAccessManager *nam = new QNetworkAccessManager(this);
    connect(nam, &QNetworkAccessManager::finished, this, &Paginacion::downloadFinished10);
    const QUrl url = QUrl(QString::fromStdString(image_url));
    QNetworkRequest request(url);
    nam->get(request);
}
void Paginacion::loadImage11(){
    string image_url=get_line((pagina_3-1)*9 +3,1);
    QNetworkAccessManager *nam = new QNetworkAccessManager(this);
    connect(nam, &QNetworkAccessManager::finished, this, &Paginacion::downloadFinished11);
    const QUrl url = QUrl(QString::fromStdString(image_url));
    QNetworkRequest request(url);
    nam->get(request);
}
void Paginacion::loadImage13(){
    string image_url=get_line((pagina_3-1)*9 +4,1);
    QNetworkAccessManager *nam = new QNetworkAccessManager(this);
    connect(nam, &QNetworkAccessManager::finished, this, &Paginacion::downloadFinished13);
    const QUrl url = QUrl(QString::fromStdString(image_url));
    QNetworkRequest request(url);
    nam->get(request);
}
void Paginacion::loadImage9(){
    string image_url=get_line((pagina_3-1)*9 +5,1);
    QNetworkAccessManager *nam = new QNetworkAccessManager(this);
    connect(nam, &QNetworkAccessManager::finished, this, &Paginacion::downloadFinished9);
    const QUrl url = QUrl(QString::fromStdString(image_url));
    QNetworkRequest request(url);
    nam->get(request);
}
void Paginacion::loadImage14(){
    string image_url=get_line((pagina_3-1)*9 +6,1);
    QNetworkAccessManager *nam = new QNetworkAccessManager(this);
    connect(nam, &QNetworkAccessManager::finished, this, &Paginacion::downloadFinished14);
    const QUrl url = QUrl(QString::fromStdString(image_url));
    QNetworkRequest request(url);
    nam->get(request);
}
void Paginacion::loadImage12(){
    string image_url=get_line((pagina_3-1)*9 +7,1);
    QNetworkAccessManager *nam = new QNetworkAccessManager(this);
    connect(nam, &QNetworkAccessManager::finished, this, &Paginacion::downloadFinished12);
    const QUrl url = QUrl(QString::fromStdString(image_url));
    QNetworkRequest request(url);
    nam->get(request);
}
void Paginacion::loadImage15(){
    string image_url=get_line((pagina_3-1)*9 +8,1);
    QNetworkAccessManager *nam = new QNetworkAccessManager(this);
    connect(nam, &QNetworkAccessManager::finished, this, &Paginacion::downloadFinished15);
    const QUrl url = QUrl(QString::fromStdString(image_url));
    QNetworkRequest request(url);
    nam->get(request);
}
void Paginacion::loadImage16(){
    string image_url=get_line((pagina_3-1)*9 +9,1);
    QNetworkAccessManager *nam = new QNetworkAccessManager(this);
    connect(nam, &QNetworkAccessManager::finished, this, &Paginacion::downloadFinished16);
    const QUrl url = QUrl(QString::fromStdString(image_url));
    QNetworkRequest request(url);
    nam->get(request);
}
///////////////////////////////////////////

void Paginacion::load_all(){
    loadImage();
    loadImage10();
    loadImage11();
    loadImage13();
    loadImage9();
    loadImage14();
    loadImage12();
    loadImage15();
    loadImage16();
}



//abrir nueva ventana con el video
void Paginacion::load_webview(int linea){
    string url=get_line(linea,2);
    QWebEngineView *view = new QWebEngineView(streaming);
    view->load(QUrl(QString::fromStdString(url)));
    view->show();
}

//configurar paginador
void Paginacion::set_paginador(){
    ui->pushButton_2->setText(QString::number(pagina_1));
    ui->pushButton_3->setText(QString::number(pagina_2));
    ui->pushButton_4->setText(QString::number(pagina_3));
    ui->pushButton_5->setText(QString::number(pagina_4));
    ui->pushButton_8->setText(QString::number(pagina_5));
}

//botones que abren las pestanas
void Paginacion::on_pushButton_clicked(){
    load_webview((pagina_3-1)*9 +1);
    actualizar_memoria();

}

void Paginacion::on_pushButton_10_clicked()
{
    load_webview((pagina_3-1)*9 +2);
    actualizar_memoria();
}

void Paginacion::on_pushButton_11_clicked()
{
    load_webview((pagina_3-1)*9 +3);
    actualizar_memoria();
}

void Paginacion::on_pushButton_13_clicked()
{
    load_webview((pagina_3-1)*9 +4);
    actualizar_memoria();
}

void Paginacion::on_pushButton_9_clicked()
{
    load_webview((pagina_3-1)*9 +5);
    actualizar_memoria();
}

void Paginacion::on_pushButton_14_clicked()
{
    load_webview((pagina_3-1)*9 +6);
    actualizar_memoria();
}

void Paginacion::on_pushButton_12_clicked()
{
    load_webview((pagina_3-1)*9 +7);
    actualizar_memoria();

}

void Paginacion::on_pushButton_15_clicked()
{
    load_webview((pagina_3-1)*9 +8);
    actualizar_memoria();

}

void Paginacion::on_pushButton_16_clicked()
{
    load_webview((pagina_3-1)*9 +9);
    actualizar_memoria();

}


//botones que modifican el paginador


void Paginacion::on_pushButton_5_clicked()
{

    if(pagina_3==503){
        pagina_5=0;
    }
    else if(pagina_3==504){
        pagina_4=0;
    }
    else if(pagina_3==505){
        pagina_3=0;
    }
    else if(pagina_3==1){
        pagina_2=0;
    }
    else if(pagina_3==2){
        pagina_1=0;
    }

    pagina_1++;
    pagina_2++;
    pagina_3++;
    pagina_4++;
    pagina_5++;
    load_all();
    set_paginador();
    actualizar_memoria();


}

void Paginacion::on_pushButton_3_clicked()
{
    if(pagina_3==3){
        pagina_1=506;
    }
    else if(pagina_3==2){
        pagina_2=506;
    }
    else if(pagina_3==1){
        pagina_3=506;
    }
    else if(pagina_3==505){
        pagina_4=506;
    }
    else if(pagina_3==504){
        pagina_5=506;
    }

    pagina_1--;
    pagina_2--;
    pagina_3--;
    pagina_4--;
    pagina_5--;

    load_all();
    set_paginador();
    actualizar_memoria();

}

void Paginacion::on_pushButton_8_clicked()
{

    if(pagina_3==503){
        pagina_5=0;
    }
    else if(pagina_3==504){
        pagina_4=0;
    }
    else if(pagina_3==505){
        pagina_3=0;
    }
    else if(pagina_3==1){
        pagina_2=0;
    }
    else if(pagina_3==2){
        pagina_1=0;
    }

    pagina_1=pagina_1+2;
    pagina_2=pagina_2+2;
    pagina_3=pagina_3+2;
    pagina_4=pagina_4+2;
    pagina_5=pagina_5+2;

    load_all();
    set_paginador();
    actualizar_memoria();

}



void Paginacion::on_pushButton_2_clicked()
{
    if(pagina_3==3){
        pagina_1=506;
    }
    else if(pagina_3==2){
        pagina_2=506;
    }
    else if(pagina_3==1){
        pagina_3=506;
    }
    else if(pagina_3==505){
        pagina_4=506;
    }
    else if(pagina_3==504){
        pagina_5=506;
    }

    pagina_1=pagina_1-2;
    pagina_2=pagina_2-2;
    pagina_3=pagina_3-2;
    pagina_4=pagina_4-2;
    pagina_5=pagina_5-2;

    load_all();
    set_paginador();
    actualizar_memoria();

}

void Paginacion::on_pushButton_7_clicked(){


   if(pagina_3==503){
       pagina_5=0;
   }
   else if(pagina_3==504){
       pagina_4=0;
   }
   else if(pagina_3==505){
       pagina_3=0;
   }
   else if(pagina_3==1){
       pagina_2=0;
   }
   else if(pagina_3==2){
       pagina_1=0;
   }

   pagina_1++;
   pagina_2++;
   pagina_3++;
   pagina_4++;
   pagina_5++;

   load_all();
   set_paginador();
   actualizar_memoria();

}

void Paginacion::on_pushButton_6_clicked()
{
    if(pagina_3==3){
        pagina_1=506;
    }
    else if(pagina_3==2){
        pagina_2=506;
    }
    else if(pagina_3==1){
        pagina_3=506;
    }
    else if(pagina_3==505){
        pagina_4=506;
    }
    else if(pagina_3==504){
        pagina_5=506;
    }

    pagina_1--;
    pagina_2--;
    pagina_3--;
    pagina_4--;
    pagina_5--;

    load_all();
    set_paginador();
    actualizar_memoria();

}

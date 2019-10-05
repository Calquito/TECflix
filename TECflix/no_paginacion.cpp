#include "no_paginacion.h"
#include "ui_no_paginacion.h"
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


string all_dataset[5042];

No_paginacion::No_paginacion(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::No_paginacion)
{
    ui->setupUi(this);
}

No_paginacion::~No_paginacion()
{
    delete ui;
}

void charge_all_dataset(){
    ifstream ip("/home/allan/Desktop/TECflix-master/TECflix/urls_pelis.txt");
    string line;
    int cont=0;
    while(ip.good() and cont<5042){
        getline(ip,line,'\n');
        cont++;
        all_dataset[cont]=line;
    }
   ip.close();
}

void No_paginacion::cargar_webview(int linea){
    string url=all_dataset[linea];
    QWebEngineView *view = new QWebEngineView(this);
    view->load(QUrl(QString::fromStdString(url)));
    view->show();

}


void No_paginacion::actualizar_memoria(){
    int consumed_kb=getValue();
    ui->label_2->setText("En uso:"+QString::number(consumed_kb)+"kb");
}

///////////////////////////////////////////////////////////////
//configurar iamgenes en los botones
void No_paginacion::downloadFinished(QNetworkReply *reply)
{
    QPixmap pixmap;
    pixmap.loadFromData(reply->readAll());
    QIcon ButtonIcon(pixmap);
    ui->pushButton->setIcon(ButtonIcon);
    ui->pushButton->setIconSize(QSize(ui->pushButton->width(), ui->pushButton->height()));
}
void No_paginacion::downloadFinished10(QNetworkReply *reply)
{
    QPixmap pixmap;
    pixmap.loadFromData(reply->readAll());
    QIcon ButtonIcon(pixmap);
    ui->pushButton_10->setIcon(ButtonIcon);
    ui->pushButton_10->setIconSize(QSize(ui->pushButton_10->width(), ui->pushButton_10->height()));
}
void No_paginacion::downloadFinished11(QNetworkReply *reply)
{
    QPixmap pixmap;
    pixmap.loadFromData(reply->readAll());
    QIcon ButtonIcon(pixmap);
    ui->pushButton_11->setIcon(ButtonIcon);
    ui->pushButton_11->setIconSize(QSize(ui->pushButton_11->width(), ui->pushButton_11->height()));
}
void No_paginacion::downloadFinished13(QNetworkReply *reply)
{
    QPixmap pixmap;
    pixmap.loadFromData(reply->readAll());
    QIcon ButtonIcon(pixmap);
    ui->pushButton_13->setIcon(ButtonIcon);
    ui->pushButton_13->setIconSize(QSize(ui->pushButton_13->width(), ui->pushButton_13->height()));
}
void No_paginacion::downloadFinished9(QNetworkReply *reply)
{
    QPixmap pixmap;
    pixmap.loadFromData(reply->readAll());
    QIcon ButtonIcon(pixmap);
    ui->pushButton_9->setIcon(ButtonIcon);
    ui->pushButton_9->setIconSize(QSize(ui->pushButton_9->width(), ui->pushButton_9->height()));
}
void No_paginacion::downloadFinished14(QNetworkReply *reply)
{
    QPixmap pixmap;
    pixmap.loadFromData(reply->readAll());
    QIcon ButtonIcon(pixmap);
    ui->pushButton_14->setIcon(ButtonIcon);
    ui->pushButton_14->setIconSize(QSize(ui->pushButton_14->width(), ui->pushButton_14->height()));
}
void No_paginacion::downloadFinished12(QNetworkReply *reply)
{
    QPixmap pixmap;
    pixmap.loadFromData(reply->readAll());
    QIcon ButtonIcon(pixmap);
    ui->pushButton_12->setIcon(ButtonIcon);
    ui->pushButton_12->setIconSize(QSize(ui->pushButton_12->width(), ui->pushButton_12->height()));
}
void No_paginacion::downloadFinished15(QNetworkReply *reply)
{
    QPixmap pixmap;
    pixmap.loadFromData(reply->readAll());
    QIcon ButtonIcon(pixmap);
    ui->pushButton_15->setIcon(ButtonIcon);
    ui->pushButton_15->setIconSize(QSize(ui->pushButton_15->width(), ui->pushButton_15->height()));
}
void No_paginacion::downloadFinished16(QNetworkReply *reply)
{
    QPixmap pixmap;
    pixmap.loadFromData(reply->readAll());
    QIcon ButtonIcon(pixmap);
    ui->pushButton_16->setIcon(ButtonIcon);
    ui->pushButton_16->setIconSize(QSize(ui->pushButton_16->width(), ui->pushButton_16->height()));
}

void No_paginacion::loadImage(){
    string image_url=get_line((pagina_3-1)*9 +1,1);
    QNetworkAccessManager *nam = new QNetworkAccessManager(this);
    connect(nam, &QNetworkAccessManager::finished, this, &No_paginacion::downloadFinished);
    const QUrl url = QUrl(QString::fromStdString(image_url));
    QNetworkRequest request(url);
    nam->get(request);
}
void No_paginacion::loadImage10(){
    string image_url=get_line((pagina_3-1)*9 +2,1);
    QNetworkAccessManager *nam = new QNetworkAccessManager(this);
    connect(nam, &QNetworkAccessManager::finished, this, &No_paginacion::downloadFinished10);
    const QUrl url = QUrl(QString::fromStdString(image_url));
    QNetworkRequest request(url);
    nam->get(request);
}
void No_paginacion::loadImage11(){
    string image_url=get_line((pagina_3-1)*9 +3,1);
    QNetworkAccessManager *nam = new QNetworkAccessManager(this);
    connect(nam, &QNetworkAccessManager::finished, this, &No_paginacion::downloadFinished11);
    const QUrl url = QUrl(QString::fromStdString(image_url));
    QNetworkRequest request(url);
    nam->get(request);
}
void No_paginacion::loadImage13(){
    string image_url=get_line((pagina_3-1)*9 +4,1);
    QNetworkAccessManager *nam = new QNetworkAccessManager(this);
    connect(nam, &QNetworkAccessManager::finished, this, &No_paginacion::downloadFinished13);
    const QUrl url = QUrl(QString::fromStdString(image_url));
    QNetworkRequest request(url);
    nam->get(request);
}
void No_paginacion::loadImage9(){
    string image_url=get_line((pagina_3-1)*9 +5,1);
    QNetworkAccessManager *nam = new QNetworkAccessManager(this);
    connect(nam, &QNetworkAccessManager::finished, this, &No_paginacion::downloadFinished9);
    const QUrl url = QUrl(QString::fromStdString(image_url));
    QNetworkRequest request(url);
    nam->get(request);
}
void No_paginacion::loadImage14(){
    string image_url=get_line((pagina_3-1)*9 +6,1);
    QNetworkAccessManager *nam = new QNetworkAccessManager(this);
    connect(nam, &QNetworkAccessManager::finished, this, &No_paginacion::downloadFinished14);
    const QUrl url = QUrl(QString::fromStdString(image_url));
    QNetworkRequest request(url);
    nam->get(request);
}
void No_paginacion::loadImage12(){
    string image_url=get_line((pagina_3-1)*9 +7,1);
    QNetworkAccessManager *nam = new QNetworkAccessManager(this);
    connect(nam, &QNetworkAccessManager::finished, this, &No_paginacion::downloadFinished12);
    const QUrl url = QUrl(QString::fromStdString(image_url));
    QNetworkRequest request(url);
    nam->get(request);
}
void No_paginacion::loadImage15(){
    string image_url=get_line((pagina_3-1)*9 +8,1);
    QNetworkAccessManager *nam = new QNetworkAccessManager(this);
    connect(nam, &QNetworkAccessManager::finished, this, &No_paginacion::downloadFinished15);
    const QUrl url = QUrl(QString::fromStdString(image_url));
    QNetworkRequest request(url);
    nam->get(request);
}
void No_paginacion::loadImage16(){
    string image_url=get_line((pagina_3-1)*9 +9,1);
    QNetworkAccessManager *nam = new QNetworkAccessManager(this);
    connect(nam, &QNetworkAccessManager::finished, this, &No_paginacion::downloadFinished16);
    const QUrl url = QUrl(QString::fromStdString(image_url));
    QNetworkRequest request(url);
    nam->get(request);
}
///////////////////////////////////////////

void No_paginacion::load_all(){
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


//configurar paginador
void No_paginacion::set_paginador(){
    ui->pushButton_2->setText(QString::number(pagina_1));
    ui->pushButton_3->setText(QString::number(pagina_2));
    ui->pushButton_4->setText(QString::number(pagina_3));
    ui->pushButton_5->setText(QString::number(pagina_4));
    ui->pushButton_8->setText(QString::number(pagina_5));
}

//botones que abren las pestanas
void No_paginacion::on_pushButton_clicked(){
    cargar_webview((pagina_3-1)*9 +1);
    actualizar_memoria();

}

void No_paginacion::on_pushButton_10_clicked()
{
    cargar_webview((pagina_3-1)*9 +2);
    actualizar_memoria();
}

void No_paginacion::on_pushButton_11_clicked()
{
    cargar_webview((pagina_3-1)*9 +3);
    actualizar_memoria();
}

void No_paginacion::on_pushButton_13_clicked()
{
    cargar_webview((pagina_3-1)*9 +4);
    actualizar_memoria();
}

void No_paginacion::on_pushButton_9_clicked()
{
    cargar_webview((pagina_3-1)*9 +5);
    actualizar_memoria();
}

void No_paginacion::on_pushButton_14_clicked()
{
    cargar_webview((pagina_3-1)*9 +6);
    actualizar_memoria();
}

void No_paginacion::on_pushButton_12_clicked()
{
    cargar_webview((pagina_3-1)*9 +7);
    actualizar_memoria();

}

void No_paginacion::on_pushButton_15_clicked()
{
    cargar_webview((pagina_3-1)*9 +8);
    actualizar_memoria();

}

void No_paginacion::on_pushButton_16_clicked()
{
    cargar_webview((pagina_3-1)*9 +9);
    actualizar_memoria();

}


//botones que modifican el paginador


void No_paginacion::on_pushButton_5_clicked()
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

void No_paginacion::on_pushButton_3_clicked()
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

void No_paginacion::on_pushButton_8_clicked()
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



void No_paginacion::on_pushButton_2_clicked()
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

void No_paginacion::on_pushButton_6_clicked()
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

void No_paginacion::on_pushButton_7_clicked()
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

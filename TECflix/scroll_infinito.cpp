#include "scroll_infinito.h"
#include "ui_scroll_infinito.h"
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

int scroll_page=0;

int scroll_cont=0;
Scroll_infinito::Scroll_infinito(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Scroll_infinito)
{
    ui->setupUi(this);
}

Scroll_infinito::~Scroll_infinito()
{
    delete ui;
}
/**
 * @brief Carga los datos obtenidos del request, los introduce en el pixmap y modifica la imagen del boton
 * @param reply QNetworkReply son los datos extraidos del url
 * @return Nada. Se modifican los botones
 */
////////////////////////////////////////////////////////////////
void Scroll_infinito::downloadFinished2(QNetworkReply *reply)
{
    QPixmap pixmap;
    pixmap.loadFromData(reply->readAll());
    QIcon ButtonIcon(pixmap);
    ui->pushButton_2->setIcon(ButtonIcon);
    ui->pushButton_2->setIconSize(QSize(ui->pushButton_2->width(), ui->pushButton_2->height()));
}
void Scroll_infinito::downloadFinished3(QNetworkReply *reply)
{
    QPixmap pixmap;
    pixmap.loadFromData(reply->readAll());
    QIcon ButtonIcon(pixmap);
    ui->pushButton_3->setIcon(ButtonIcon);
    ui->pushButton_3->setIconSize(QSize(ui->pushButton_3->width(), ui->pushButton_3->height()));
}
void Scroll_infinito::downloadFinished4(QNetworkReply *reply)
{
    QPixmap pixmap;
    pixmap.loadFromData(reply->readAll());
    QIcon ButtonIcon(pixmap);
    ui->pushButton_4->setIcon(ButtonIcon);
    ui->pushButton_4->setIconSize(QSize(ui->pushButton_4->width(), ui->pushButton_4->height()));
}
void Scroll_infinito::downloadFinished5(QNetworkReply *reply)
{
    QPixmap pixmap;
    pixmap.loadFromData(reply->readAll());
    QIcon ButtonIcon(pixmap);
    ui->pushButton_5->setIcon(ButtonIcon);
    ui->pushButton_5->setIconSize(QSize(ui->pushButton_5->width(), ui->pushButton_5->height()));
}
void Scroll_infinito::downloadFinished6(QNetworkReply *reply)
{
    QPixmap pixmap;
    pixmap.loadFromData(reply->readAll());
    QIcon ButtonIcon(pixmap);
    ui->pushButton_6->setIcon(ButtonIcon);
    ui->pushButton_6->setIconSize(QSize(ui->pushButton_6->width(), ui->pushButton_6->height()));
}
void Scroll_infinito::downloadFinished7(QNetworkReply *reply)
{
    QPixmap pixmap;
    pixmap.loadFromData(reply->readAll());
    QIcon ButtonIcon(pixmap);
    ui->pushButton_7->setIcon(ButtonIcon);
    ui->pushButton_7->setIconSize(QSize(ui->pushButton_7->width(), ui->pushButton_7->height()));
}
void Scroll_infinito::downloadFinished8(QNetworkReply *reply)
{
    QPixmap pixmap;
    pixmap.loadFromData(reply->readAll());
    QIcon ButtonIcon(pixmap);
    ui->pushButton_8->setIcon(ButtonIcon);
    ui->pushButton_8->setIconSize(QSize(ui->pushButton_8->width(), ui->pushButton_8->height()));
}
void Scroll_infinito::downloadFinished9(QNetworkReply *reply)
{
    QPixmap pixmap;
    pixmap.loadFromData(reply->readAll());
    QIcon ButtonIcon(pixmap);
    ui->pushButton_9->setIcon(ButtonIcon);
    ui->pushButton_9->setIconSize(QSize(ui->pushButton_9->width(), ui->pushButton_9->height()));
}
void Scroll_infinito::downloadFinished10(QNetworkReply *reply)
{
    QPixmap pixmap;
    pixmap.loadFromData(reply->readAll());
    QIcon ButtonIcon(pixmap);
    ui->pushButton_10->setIcon(ButtonIcon);
    ui->pushButton_10->setIconSize(QSize(ui->pushButton_10->width(), ui->pushButton_10->height()));
}
/**
 * @brief obtiene la url de la imagen desde la base de datos, se conecta a internet y obtiene la imagen
 * @return Nada. Se modifican los botones
 */
void Scroll_infinito::loadImage2(){
    string image_url=get_line(scroll_page*9 +1,1);
    QNetworkAccessManager *nam = new QNetworkAccessManager(this);
    connect(nam, &QNetworkAccessManager::finished, this, &Scroll_infinito::downloadFinished2);
    const QUrl url = QUrl(QString::fromStdString(image_url));
    QNetworkRequest request(url);
    nam->get(request);
}
void Scroll_infinito::loadImage3(){
    string image_url=get_line(scroll_page*9 +2,1);
    QNetworkAccessManager *nam = new QNetworkAccessManager(this);
    connect(nam, &QNetworkAccessManager::finished, this, &Scroll_infinito::downloadFinished3);
    const QUrl url = QUrl(QString::fromStdString(image_url));
    QNetworkRequest request(url);
    nam->get(request);
}
void Scroll_infinito::loadImage4(){
    string image_url=get_line(scroll_page*9 +3,1);
    QNetworkAccessManager *nam = new QNetworkAccessManager(this);
    connect(nam, &QNetworkAccessManager::finished, this, &Scroll_infinito::downloadFinished4);
    const QUrl url = QUrl(QString::fromStdString(image_url));
    QNetworkRequest request(url);
    nam->get(request);
}
void Scroll_infinito::loadImage5(){
    string image_url=get_line(scroll_page +4,1);
    QNetworkAccessManager *nam = new QNetworkAccessManager(this);
    connect(nam, &QNetworkAccessManager::finished, this, &Scroll_infinito::downloadFinished5);
    const QUrl url = QUrl(QString::fromStdString(image_url));
    QNetworkRequest request(url);
    nam->get(request);
}
void Scroll_infinito::loadImage6(){
    string image_url=get_line(scroll_page*9 +5,1);
    QNetworkAccessManager *nam = new QNetworkAccessManager(this);
    connect(nam, &QNetworkAccessManager::finished, this, &Scroll_infinito::downloadFinished6);
    const QUrl url = QUrl(QString::fromStdString(image_url));
    QNetworkRequest request(url);
    nam->get(request);
}
void Scroll_infinito::loadImage7(){
    string image_url=get_line(scroll_page*9 +6,1);
    QNetworkAccessManager *nam = new QNetworkAccessManager(this);
    connect(nam, &QNetworkAccessManager::finished, this, &Scroll_infinito::downloadFinished7);
    const QUrl url = QUrl(QString::fromStdString(image_url));
    QNetworkRequest request(url);
    nam->get(request);
}
void Scroll_infinito::loadImage8(){
    string image_url=get_line(scroll_page*9 +7,1);
    QNetworkAccessManager *nam = new QNetworkAccessManager(this);
    connect(nam, &QNetworkAccessManager::finished, this, &Scroll_infinito::downloadFinished8);
    const QUrl url = QUrl(QString::fromStdString(image_url));
    QNetworkRequest request(url);
    nam->get(request);
}
void Scroll_infinito::loadImage9(){
    string image_url=get_line(scroll_page +8,1);
    QNetworkAccessManager *nam = new QNetworkAccessManager(this);
    connect(nam, &QNetworkAccessManager::finished, this, &Scroll_infinito::downloadFinished9);
    const QUrl url = QUrl(QString::fromStdString(image_url));
    QNetworkRequest request(url);
    nam->get(request);
}
void Scroll_infinito::loadImage10(){
    string image_url=get_line(scroll_page*9 +9,1);
    QNetworkAccessManager *nam = new QNetworkAccessManager(this);
    connect(nam, &QNetworkAccessManager::finished, this, &Scroll_infinito::downloadFinished10);
    const QUrl url = QUrl(QString::fromStdString(image_url));
    QNetworkRequest request(url);
    nam->get(request);
}
/////////////////////////////////////////////////////////////////////////
/**
 * @brief carga la imagen en todos los botones
 * @return nada, llama a la funcion que carga cada imagen individualmente
*/
void Scroll_infinito::load_all(){
    loadImage2();
    loadImage3();
    loadImage4();
    loadImage5();
    loadImage6();
    loadImage7();
    loadImage8();
    loadImage9();
    loadImage10();
}




/**
 * @brief mueve el scroll
 * @return nada, llama a la funcion que carga cada imagen individualmente
*/
void Scroll_infinito::on_pushButton_pressed()
{
    scroll_cont=scroll_cont+20;
    if (scroll_cont>180){
        scroll_cont=0;
        scroll_page++;
        load_all();
    }
    ui->pushButton->setAutoRepeat(true);
    ui->pushButton_2->setGeometry(110,40+scroll_cont,131,131);
    ui->pushButton_3->setGeometry(300,40+scroll_cont,131,131);
    ui->pushButton_4->setGeometry(490,40+scroll_cont,131,131);
    ui->pushButton_5->setGeometry(110,210+scroll_cont,131,131);
    ui->pushButton_6->setGeometry(300,210+scroll_cont,131,131);
    ui->pushButton_7->setGeometry(490,210+scroll_cont,131,131);
    ui->pushButton_8->setGeometry(110,380+scroll_cont,131,131);
    ui->pushButton_9->setGeometry(300,380+scroll_cont,131,131);
    ui->pushButton_10->setGeometry(490,380+scroll_cont,131,131);
}

void Scroll_infinito::on_pushButton_11_pressed()
{
    scroll_cont=scroll_cont-20;
    if (scroll_cont<-180){
        scroll_page--;
        load_all();
        scroll_cont=0;
    }
    ui->pushButton_11->setAutoRepeat(true);
    ui->pushButton_2->setGeometry(110,40+scroll_cont,131,131);
    ui->pushButton_3->setGeometry(300,40+scroll_cont,131,131);
    ui->pushButton_4->setGeometry(490,40+scroll_cont,131,131);
    ui->pushButton_5->setGeometry(110,210+scroll_cont,131,131);
    ui->pushButton_6->setGeometry(300,210+scroll_cont,131,131);
    ui->pushButton_7->setGeometry(490,210+scroll_cont,131,131);
    ui->pushButton_8->setGeometry(110,380+scroll_cont,131,131);
    ui->pushButton_9->setGeometry(300,380+scroll_cont,131,131);
    ui->pushButton_10->setGeometry(490,380+scroll_cont,131,131);
}

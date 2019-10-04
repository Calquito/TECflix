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
#include <QMediaPlayer>
#include <QVideoWidget>

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

void Paginacion::loadImage(){


}

void Paginacion::load_webview(int linea){
    string url=get_line(linea);
    QWebEngineView *view = new QWebEngineView(streaming);
    view->load(QUrl(QString::fromStdString(url)));
    view->show();
}

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

    set_paginador();
    actualizar_memoria();

}

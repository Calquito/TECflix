#include "paginacion.h"
#include "ui_paginacion.h"
#include <sstream>
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <QWebEngineHistory>
#include <QWebEngineHistoryItem>
#include <QWebEnginePage>
#include <QWebEngineView>
#include <QtWebEngineWidgets/QtWebEngineWidgets>


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
}

Paginacion::~Paginacion()
{
    delete ui;
}


void Paginacion::on_pushButton_7_clicked(){

   //cambiar el paginador

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

   ui->pushButton_2->setText(QString::number(pagina_1));
   ui->pushButton_3->setText(QString::number(pagina_2));
   ui->pushButton_4->setText(QString::number(pagina_3));
   ui->pushButton_5->setText(QString::number(pagina_4));
   ui->pushButton_8->setText(QString::number(pagina_5));

   //obtener e insertar de la base de datos
   using namespace std;
   ifstream ip("/home/allan/Desktop/TECflix/urls_portadas.text");
   string line;
   int cont=0;
   printf(("dsds"));
   while(ip.good()){
       getline(ip,line,',');
       if (line.substr(0,4).compare(("http"))==0){
           cout<<line<<endl;
       }
       if(cont==0){
           ui->pushButton->setText("https://m.media-amazon.com/images/M/MV5BMjZiYTUzMzktZWI5Yy00Mzk4LWFlMDgtYjRmNWU0Mzc0MzNiXkEyXkFqcGdeQXVyMjUzOTY1NTc@._V1_UX182_CR0,0,182,268_AL_.jpg");

       }

   }
   ip.close();


   //ui->pushButton->setText("https://m.media-amazon.com/images/M/MV5BMjZiYTUzMzktZWI5Yy00Mzk4LWFlMDgtYjRmNWU0Mzc0MzNiXkEyXkFqcGdeQXVyMjUzOTY1NTc@._V1_UX182_CR0,0,182,268_AL_.jpg");

}
void Paginacion::loadImage(){

}

void Paginacion::on_pushButton_clicked(){
    QWebEngineView *view = new QWebEngineView(this);
    view->load(QUrl("https://stackoverflow.com/questions/36430541/mixed-qt4-and-qt5-in-a-application"));
    view->show();
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

    ui->pushButton_2->setText(QString::number(pagina_1));
    ui->pushButton_3->setText(QString::number(pagina_2));
    ui->pushButton_4->setText(QString::number(pagina_3));
    ui->pushButton_5->setText(QString::number(pagina_4));
    ui->pushButton_8->setText(QString::number(pagina_5));

}

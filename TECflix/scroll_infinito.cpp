#include "scroll_infinito.h"
#include "ui_scroll_infinito.h"

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

void Scroll_infinito::on_pushButton_pressed()
{
    scroll_cont=scroll_cont+20;
    if (scroll_cont>180){
        scroll_cont=0;
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

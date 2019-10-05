#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "paginacion.h"
#include "abridor.h"
#include "scroll_infinito.h"

using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{

    paginacion= new Paginacion(this);
    paginacion->show();

}

void MainWindow::on_pushButton_2_clicked()
{
    scroll_infinito= new Scroll_infinito(this);
    scroll_infinito->show();
}


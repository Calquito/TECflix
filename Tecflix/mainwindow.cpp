#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "paginacion.h"

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
    infinite_scroll= new Infinite_scroll(this);
    infinite_scroll->show();
}

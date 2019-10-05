#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "paginacion.h"
#include "abridor.h"
#include "scroll_infinito.h"
#include "no_paginacion.h"

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

/**
 * @brief abre uno de los modos(paginacion, no paginacion o scroll)
 * @return ninguno, solo abre una nueva ventana
 */
void MainWindow::on_pushButton_clicked()
{

    paginacion= new Paginacion(this);
    paginacion->load_all();
    paginacion->show();

}

void MainWindow::on_pushButton_2_clicked()
{
    scroll_infinito= new Scroll_infinito(this);
    scroll_infinito->load_all();
    scroll_infinito->show();
}


void MainWindow::on_pushButton_3_clicked()
{
    no_paginacion= new No_paginacion(this);
    no_paginacion->load_all();
    no_paginacion->show();

}

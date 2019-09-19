#include "infinite_scroll.h"
#include "ui_infinite_scroll.h"

Infinite_scroll::Infinite_scroll(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Infinite_scroll)
{
    ui->setupUi(this);
}

Infinite_scroll::~Infinite_scroll()
{
    delete ui;
}

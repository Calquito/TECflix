#include "streaming.h"
#include "ui_streaming.h"
#include <QUrl>

Streaming::Streaming(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Streaming)
{
    ui->setupUi(this);
}

Streaming::~Streaming()
{
    delete ui;
}

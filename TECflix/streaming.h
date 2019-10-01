#ifndef STREAMING_H
#define STREAMING_H

#include <QMainWindow>


namespace Ui {
class Streaming;
}

class Streaming : public QMainWindow
{
    Q_OBJECT

public:
    explicit Streaming(QWidget *parent = nullptr);
    ~Streaming();

private:
    Ui::Streaming *ui;
};

#endif // STREAMING_H

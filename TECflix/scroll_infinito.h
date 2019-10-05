#ifndef SCROLL_INFINITO_H
#define SCROLL_INFINITO_H

#include <QMainWindow>
extern int scroll_cont;

namespace Ui {
class Scroll_infinito;
}

class Scroll_infinito : public QMainWindow
{
    Q_OBJECT

public:
    explicit Scroll_infinito(QWidget *parent = nullptr);
    ~Scroll_infinito();

private slots:
    void on_pushButton_pressed();

    void on_pushButton_11_pressed();

private:
    Ui::Scroll_infinito *ui;
};

#endif // SCROLL_INFINITO_H

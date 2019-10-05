#ifndef INFINITE_SCROLL_H
#define INFINITE_SCROLL_H

#include <QMainWindow>

extern int scroll_cont;

namespace Ui {
class Infinite_scroll;
}

class Infinite_scroll : public QMainWindow
{
    Q_OBJECT

public:
    explicit Infinite_scroll(QWidget *parent = nullptr);
    ~Infinite_scroll();

private slots:
    void on_pushButton_pressed();

    void on_pushButton_11_clicked();

    void on_pushButton_11_pressed();

    void on_pushButton_12_pressed();

private:
    Ui::Infinite_scroll *ui;
};

#endif // INFINITE_SCROLL_H

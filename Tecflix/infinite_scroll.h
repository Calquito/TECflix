#ifndef INFINITE_SCROLL_H
#define INFINITE_SCROLL_H

#include <QMainWindow>

namespace Ui {
class Infinite_scroll;
}

class Infinite_scroll : public QMainWindow
{
    Q_OBJECT

public:
    explicit Infinite_scroll(QWidget *parent = nullptr);
    ~Infinite_scroll();

private:
    Ui::Infinite_scroll *ui;
};

#endif // INFINITE_SCROLL_H

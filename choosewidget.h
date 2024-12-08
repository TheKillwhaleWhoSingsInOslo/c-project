#ifndef CHOOSEWIDGET_H
#define CHOOSEWIDGET_H

#include <QWidget>

namespace Ui {
class choosewidget;
}

class choosewidget : public QWidget
{
    Q_OBJECT

public:
    explicit choosewidget(QWidget *parent = nullptr);
    virtual void paintEvent(QPaintEvent* event);
    void secondwidget();
    ~choosewidget();

private:
    Ui::choosewidget *ui;
};

#endif // CHOOSEWIDGET_H

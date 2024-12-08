#ifndef OPENWIDGET_H
#define OPENWIDGET_H

#include <QWidget>

namespace Ui {
class openwidget;
}

class openwidget : public QWidget
{
    Q_OBJECT

public:
    explicit openwidget(QWidget *parent = nullptr);
    virtual void paintEvent(QPaintEvent* event);
    void secondwidget();
    ~openwidget();

private:
    Ui::openwidget *ui;
};

#endif // OPENWIDGET_H

#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include"gamemap.h"
QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    virtual void paintEvent(QPaintEvent* event);
    ~Widget();
    void drawmap();

private:
    Ui::Widget *ui;
    gamemap* mygamemap;
    QPainter* mappainter;

};
#endif // WIDGET_H

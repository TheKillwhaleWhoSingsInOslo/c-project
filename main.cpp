#include "widget.h"
#include "openwidget.h"
#include <QApplication>
#include <QPushButton>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    openwidget ow;
    ow.show();

    return a.exec();
}

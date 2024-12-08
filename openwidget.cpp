#include "openwidget.h"
#include "ui_openwidget.h"
#include<QPushButton>
#include<QFileDialog>
#include<QPainter>
#include<QDebug>
#include"choosewidget.h"
openwidget::openwidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::openwidget)
{
    ui->setupUi(this);
    setFixedSize(1024,576);
    QPushButton* start=new QPushButton;
    QIcon icon1;
    icon1.addFile("://img/QQ_1733660780738.png");
    start->setParent(this);
    start->resize(200,75);
    start->move(50,475);
    start->setIcon(icon1);
    start->setIconSize(QSize(150,75));
    start->show();
    connect(start, &QPushButton::clicked, this, &openwidget::secondwidget);
}
void openwidget::paintEvent(QPaintEvent* event){
    QPainter bgpaint;
    bgpaint.begin(this);
    bgpaint.drawImage(QRect(0,0,1024,576),QImage("://img/7a7fafcc-a295-447b-9f4b-47c07b37e8a1.png"));
    bgpaint.end();
}
void openwidget::secondwidget(){
    choosewidget *next=new choosewidget;
    this->close();
    next->show();
}
openwidget::~openwidget()
{
    delete ui;
}

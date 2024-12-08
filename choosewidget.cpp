#include "choosewidget.h"
#include "ui_choosewidget.h"
#include<QPushButton>
#include<QFileDialog>
#include<QPainter>
#include<QDebug>
#include"widget.h"
choosewidget::choosewidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::choosewidget)
{
    ui->setupUi(this);
    setFixedSize(1024,576);
    QPushButton* start=new QPushButton;
    QIcon icon1;

    icon1.addFile("://img/QQ_1733662493088.png");
    start->setParent(this);
    start->resize(275,200);
    start->move(50,100);
    start->setIcon(icon1);
    start->setIconSize(QSize(300,200));
    start->show();
    connect(start, &QPushButton::clicked, this, &choosewidget::secondwidget);
}
void choosewidget::paintEvent(QPaintEvent* event){
    QPainter bgpaint;
    bgpaint.begin(this);
    bgpaint.drawImage(QRect(0,0,1024,576),QImage("://img/QQ_1733662547004.png"));
    bgpaint.end();
}
void choosewidget::secondwidget(){
    Widget *next=new Widget;
    this->close();
    next->show();
}
choosewidget::~choosewidget()
{
    delete ui;
}

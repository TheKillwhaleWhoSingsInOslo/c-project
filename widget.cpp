#include "widget.h"
#include "./ui_widget.h"
#include<QPushButton>
#include<QFileDialog>
#include<QPainter>
#include<QDebug>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    setFixedSize(1024,576);
    mygamemap=new gamemap(this);
    QString filename = "://map1.txt.txt";
    filename = QDir::toNativeSeparators(filename);
    mygamemap->initmap(filename);


}
void Widget::drawmap(){


}
void Widget::paintEvent(QPaintEvent* event){

    QPainter bgpaint;
    bgpaint.begin(this);
    bgpaint.drawImage(QRect(0,0,1024,576),QImage("://img/a5e221f3-2032-4d06-8988-b901152ea905.png"));

    for(int i=0;i<mygamemap->row;i++){
        for(int j=0;j<mygamemap->col;j++){


            if(mygamemap->pmap[i][j]==0) {
                bgpaint.drawImage(QRect(j*64,i*64,64,64),QImage("://img/d3c67882-865f-44eb-bb9d-b72aa76305cc.png"));
            }else if(mygamemap->pmap[i][j]==1){
                bgpaint.drawImage(QRect(j*64,i*64,64,64),QImage("://img/lu.png"));
            }else if(mygamemap->pmap[i][j]==2){
                bgpaint.drawImage(QRect(j*64,i*64,64,64),QImage("://img/chusheng.png"));
            }else if(mygamemap->pmap[i][j]==4){
                bgpaint.drawImage(QRect(j*64,i*64,64,64),QImage("://img/7627f24f-b6a7-49e1-b1a2-e2f19abf351b.png"));
            }
          }

        }
    bgpaint.end();


}
Widget::~Widget()
{
    delete ui;
}

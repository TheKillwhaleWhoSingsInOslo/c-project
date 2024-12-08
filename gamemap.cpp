#include "gamemap.h"
#include<QFile>
#include<QDebug>
gamemap::gamemap(QObject *parent)
    : QObject{parent}
{
    row=0;
    col=0;
    pmap=nullptr;
}
gamemap::~gamemap(){
    clear();
}
void gamemap::clear(){
    if(pmap!=nullptr){
        for(int i=0;i<row;i++){
            delete[] pmap[i];
        }
        delete[] pmap;
    }
}
bool gamemap::initmap(QString filename){
    QFile file(filename);
    if (!file.open(QIODevice::ReadOnly)) {
        return false;
    }
    QByteArray qba=file.readAll();
    //qba.replace("\r\n","\n");
    QList<QByteArray> list=qba.split('\n');
    row=list.size();
    pmap=new int*[row];
    for(int i=0;i<row;i++){
        QList<QByteArray> eachmap=list[i].split(',');
        col=eachmap.size();
        pmap[i]=new int[col];
        for(int j=0;j<col;j++){
            pmap[i][j]=eachmap[j].toInt();

        }
    }


    return true;
}

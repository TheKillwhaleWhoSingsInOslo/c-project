#ifndef GAMEMAP_H
#define GAMEMAP_H

#include <QObject>
enum Mapelement{
    road,
    obstacle1,

    bornpoint

};

class gamemap : public QObject
{
    Q_OBJECT
public:
    explicit gamemap(QObject *parent = nullptr);
    bool initmap(QString filename);
    void clear();
    int row;
    int col;
    int** pmap;
    ~gamemap();
signals:
};

#endif // GAMEMAP_H

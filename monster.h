#ifndef MONSTER_H
#define MONSTER_H
#include"carrot.h"
class monster
{
public:
    monster();
    monster(int c) ;
    void attack(carrot& a);
    void showblood();
    void injured(int a);
    void move();
    bool if_death();
    void huoqu(int &a, int &b);
    virtual void showimage() = 0;
    int x, y;

};

#endif // MONSTER_H

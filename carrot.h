#ifndef CARROT_H
#define CARROT_H

class carrot
{
public:
    carrot();
    carrot(int a, int b,int c);
    void injured();
    void showblood();
private:
    int x, y,blood;
};

#endif // CARROT_H

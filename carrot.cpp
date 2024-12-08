#include "carrot.h"

carrot::carrot() {}
carrot::carrot(int a,int b,int c) {
    x=a;
    y=b;
    blood=c;
}
void carrot::injured(){
    this->blood-=1;
}
void carrot::showblood(){

}

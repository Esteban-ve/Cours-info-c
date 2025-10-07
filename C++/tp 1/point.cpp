#include "point.h"

point :: point (int a, int b, int c)
{
   this-> x = a ;
   this->y = b ;
   this->z = c ;
};

void point :: initialize (int a, int b, int c) 
{
   this->x = a ;
   this->y = b ;
   this->z = c ;
};

void point :: setters(int  a, int b ,int c) 
{	
   this->x = a ;
   this->y = b ;
   this->z = c ;
};

void point :: translate(int a, int b, int c)
{
   this->x = x+a ;
   this->y = y+b ;
   this->z = z+c ;
};

int point::milieuX(point p)const {
    return x + p.getX();
};

int point::milieuY(point p)const {
    return y + p.getY();
};

int point::milieuZ(point p)const {
    return z + p.getZ();
};


int point::getX() const {
    return x;
}

int point::getY() const {
    return y;
}

int point::getZ() const {
    return z;
}





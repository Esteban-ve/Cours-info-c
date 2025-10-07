#include "point.h"


    // Constructeur
point :: point (int a, int b, int c)
{
   this-> x = a ;
   this->y = b ;
   this->z = c ;
};


    // Méthodes
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


double point::milieuX(int a)const {
    return (x + a)/2;
};

double point::milieuY(int b)const {
    return (y + b)/2;
};

double point::milieuZ(int c)const {
    return (z + c)/2;
};


    // Getters

int point::getX() const {
    return x;
}

int point::getY() const {
    return y;
}

int point::getZ() const {
    return z;
}





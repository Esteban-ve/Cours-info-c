#include “Point.h”

void Point :: initialize (int a, int b, int c) 
{
   x = a ;
   y = b ;
   z = c ;
}

void Point :: setters(int  a, int b ,int c) 
{	
   x = a ;
   y = b ;
   z = c ;
}

void Point :: getters()
{
    return x,y,z;
}



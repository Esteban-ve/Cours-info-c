#include "point.h"

void point :: initialize (int a, int b, int c) 
{
   x = a ;
   y = b ;
   z = c ;
}

void point :: setters(int  a, int b ,int c) 
{	
   x = a ;
   y = b ;
   z = c ;
}

int point :: getters()
{
    return (x,y,z);
}



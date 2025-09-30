#include "point.h"

point :: point (int a, int b, int c)
{
   this-> x = a ;
   this.y = b ;
   this.z = c ;
};

void point :: initialize (int a, int b, int c) 
{
   this.x = a ;
   this.y = b ;
   this.z = c ;
};

void point :: setters(int  a, int b ,int c) 
{	
   this.x = a ;
   this.y = b ;
   this.z = c ;
};

int point :: getters()
{
    return (this.x,this.y,this.z);
};



#include <iostream>
#include "Point.h"


void main ()
{
   point p = point() ; // creation d’un point
   p.initialize(10,2,5);

   point *pt = new point();  // allocation dynamique d’un Point
   pt->setters(4,5,5); 

   std:: cout <<  ("%d", pt->getters());
}


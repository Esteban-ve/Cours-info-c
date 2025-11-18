#include <iostream>
#include "point.h"

int main ()
{
   point p = point(10,2,5) ; // creation d’un point
/*

   point *pt = new point();  // allocation dynamique d’un Point
   pt->setters(4,5,5); 
*/

   std::cout << "Les coordonées du point p : (" 
            << p.getX() << ", " 
            << p.getY() << ", " 
            << p.getZ() << ")" << std::endl;

   point p2 = point(0,0,0) ; // creation d’un autre point

   std::cout << "milieu entre les deux points:("
   << p.milieuX(p2.getX()) << ", "
   << p.milieuY(p2.getY()) << ", "
   << p.milieuZ(p2.getZ()) << ", il est probablement tronqué )" << std::endl;

   return 1;
}


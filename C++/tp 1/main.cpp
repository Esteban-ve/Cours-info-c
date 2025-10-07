#include <iostream>
#include "Point.h"
#include "Point.cpp"

int main ()
{
   point p = point(10,2,5) ; // creation d’un point
   p.initialize(10,2,5);

/*   point *pt = new point();  // allocation dynamique d’un Point
   pt->setters(4,5,5); 
*/

   std::cout << "Les coordonées du point p : (" 
            << p.getX() << ", " 
            << p.getY() << ", " 
            << p.getZ() << ")" << std::endl;

   point p2 = point(0,0,0) ; // creation d’un point
   p2.initialize(0,0,0);

   std::cout << "milieu entre les deux points:("
   << p.milieuX(p2.getX()) << ", "
   << p.milieuY(p2.getY()) << ", "
   << p.milieuZ(p2.getZ()) << ")" << std::endl;

}


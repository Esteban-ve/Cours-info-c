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

}


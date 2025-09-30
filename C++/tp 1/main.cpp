#include “Point.h”

void main (){
   Point p = Point() ; // creation d’un point
   p.initialize(10,2);

   Point *pt = new Point();  // allocation dynamique d’un Point
   pt->move(4,5); 
}


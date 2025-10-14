#include <iostream>
#include "DATE.h"

int main (){
   date auj= date(14,10,2025);

    auj.affiche();

    std::cout << "J'arrive a print des trucs, genre l'annee: "
    << auj.gety() << std::endl;

   auj.sety(auj.gety()+1);
   std::cout << "Un an passe donc l'annee est maintenant "
    << auj.gety() << std::endl;


   return 0;
}


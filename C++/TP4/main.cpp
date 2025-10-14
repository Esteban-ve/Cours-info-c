#include <iostream>
#include "Date.h"
#include "Heure.h"

int main (){
   date auj= date(14,10,2025);

    auj.affiche();

    std::cout << "J'arrive a print des trucs, genre l'annee: "
    << auj.gety() << std::endl;

   auj.sety(auj.gety()+1);
   std::cout << "Un an passe donc l'annee est maintenant "
    << auj.gety() << std::endl;

   heure instant= heure(10,46);

    instant.affiche();

    std::cout << "Je print l'heure: "
    << instant.geth() << std::endl;

   instant.seth(instant.geth()+1);
   std::cout << "Dans une heure il sera "
    << instant.geth() 
    << " heure" << std::endl;

   return 0;
}


#include <iostream>
#include <string>
#include "Personne.h"


int main (){
   std::string pn= "Paul";
   std::string n= "Dupont";
   

   personne paul= personne(n,pn);


   paul.affiche();

   return 0;
}


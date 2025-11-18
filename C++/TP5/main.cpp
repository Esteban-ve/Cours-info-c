#include "Personne.h"
#include <iostream>
#include <string>



int main (){
   std::string pn= "Paul";
   std::string n= "Dupont";
   

   personne paul= personne(n,pn);


   paul.affiche();

   return 0;
}


#include <iostream>
#include <string>
#include "Date.h"
#include "Heure.h"
#include "Rdv.h"


int main (){
   date auj= date(14,10,2025);
   std::string plage= "la plage";
   heure instant= heure(10,46);

   rdv coucou= rdv(auj,instant,plage);


   std::string ami1 = "Amelie";
   std::string ami2= "Paul";
   coucou.ajouteparticipant(ami1);
   coucou.ajouteparticipant(ami2);
   coucou.affiche();


   return 0;
}


#include "Personne.h"
#include "Eleve.h"
#include "Personnel.h"
#include <iostream>
#include <string>



int main (){
    std::string pn= "Paul";
    std::string n= "Dupont";
    std::string tel= "07453955830";
    std::string promotion= "2026";


    eleve paul= eleve(n,pn);
    paul.settelephone(tel);
    paul.setpromotion(promotion);

    personnel luna= personnel(std::string("Chattam"), std::string("Luna"));
    luna.setsalaire(1750);
    luna.affiche();

    //paul.affiche();

    return 0;
    }


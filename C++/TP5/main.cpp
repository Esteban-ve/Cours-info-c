#include "Personne.h"
#include <iostream>
#include <string>



int main (){
    std::string pn= "Paul";
    std::string n= "Dupont";
    std::string tel= "07453955830";


    personne paul= personne(n,pn);
    paul.settelephone(tel);

    paul.affiche();

    return 0;
    }


#include "Personne.h"
#include "Personnel.h"
#include "Personneladmin.h"
#include <iostream>
#include <string>



//  Constructeurs

personneladmin::personneladmin(std::string nom, std::string prenom):personnel( nom, prenom) {
    heuressup = 0;
}

// Methodes

float personneladmin::calculsalaire() const{
    return getsalaire() + heuressup * taux;
}

void personneladmin::affiche() const {
    personnel::affiche();
    std::cout<<" grace aux heuressup iel gagne maintenant :"
    << calculsalaire()<< std::endl;
}


// getters et setters


float personneladmin::gettaux() const{
    return taux;
}
int personneladmin::getheuressup() const{
    return heuressup;
}

void personneladmin::settaux(float taux){
    this -> taux = taux;
}

void personneladmin::setheuressup(int heuressup){
    this -> heuressup = heuressup;
}




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

float personnel::calculsalaire() const{
    return salaire + heuressup * taux;
}

void personnelamdin::affiche() const {
    personnel::affiche();
    std::cout<<" le membre du personnel gagne ce salaire :"
    << calculsalaire()<< std::endl;
}


// getters et setters


float personnelamdin::gettaux() const{
    return taux;
}
int personnelamdin::getheuressup() const{
    return heuressup;
}

void personneladmin::settaux(float taux){
    this -> taux = taux;
}

void personneladmin::setheuressup(float heuressup){
    this -> heuressup = heuressup;
}








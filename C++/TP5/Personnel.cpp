#include "Personne.h"
#include "Personnel.h"
#include <iostream>
#include <string>



//  Constructeurs

personnel::personnel(std::string nom, std::string prenom):personne( nom, prenom) {
    salaire = 0;
}

// Methodes

float personnel::calculsalaire() const{
    return salaire;
}

void personnel::affiche() const {
    personne::affiche();
    std::cout<<" le membre du personnel gagne ce salaire :"
    << calculsalaire()<< std::endl;
}


// getters et setters


float personnel::getsalaire() const{
    return calculsalaire();
}

void personnel::setsalaire(float salaire){
    this -> salaire = salaire;
}



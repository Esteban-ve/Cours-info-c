#include "Personne.h"
#include "Personnel.h"
#include "Enseignantvacataire.h"
#include <iostream>
#include <string>



//  Constructeurs

enseignantvacataire::enseignantvacataire(std::string nom, std::string prenom):personnel( nom, prenom) {
    taux = 0;
    casier = std::string("");
    nbreheures = 0; 
}

// Methodes

float enseignantvacataire::calculsalaire() const{
    return  taux * nbreheures ;
}

void enseignantvacataire::affiche() const {
    personnel::affiche();
    std::cout<< "son casier est le"
    << getcasier() <<" grace aux heures travailler iel gagne maintenant :"
    << calculsalaire()<< std::endl;
}


// getters et setters

std::string enseignantvacataire::getcasier() const{
    return casier;
}

float enseignantvacataire::gettaux() const{
    return taux;
}

int enseignantvacataire::getnbreheures() const {
    return nbreheures;
}

void enseignantvacataire::setcasier(std::string casier) {
    this -> casier = casier;
}

void enseignantvacataire::settaux(float taux) {
    this -> taux = taux;
}

void enseignantvacataire::setnbreheures(int nbreheures) {
    this -> nbreheures = nbreheures;
}




#include <iostream>
#include <string>
#include "Personne.h"

//  Constructeurs

personne::personne(std::string nom_p, std::string prenom_p, std::string adresse_p="", std::string telephone_p=""): nom(nom_p), prenom(prenom_p),adresse(adresse_p), telephone(telephone_p) {;}
personne::personne(std::string nom_p, std::string prenom_p):nom(nom_p), prenom(prenom_p){
    adresse = std::string "";
    telephone = std::string "";
}

// Méthodes

void personne::affiche() const {
    std::cout << "La personne décrit.e est "
    
        << nom << " " 
        << prenom << " habitant au" 
        << adresse << " et ayant pour telephone"

        << telephone << std::endl;
    }

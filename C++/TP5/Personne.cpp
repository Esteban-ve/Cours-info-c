#include <string>
#include "Personne.h"

//  Constructeurs

personne(std::string nom_p, std::string prenom_p, std::string adresse_p="", std::string telephone_p=""): nom(nom_p), prenom(prenom_p),adresse(adresse_p), telephone(telephone_p) {}


// Méthodes

void personne::affiche() const {
    std::cout << "La personne décrit.e est "
    
        << nom << " " 
        << prenom << " habitant au" 
        << adresse << " et ayant pour telephone"

        << telephone << std::endl;
    }

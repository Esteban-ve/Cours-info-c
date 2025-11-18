#include "Personne.h"
#include <iostream>
#include <string>


//  Constructeurs

personne::personne(std::string nom_p, std::string prenom_p, std::string adresse_p, std::string telephone_p): nom(nom_p), prenom(prenom_p),adresse(adresse_p), telephone(telephone_p) {}
personne::personne(std::string nom_p, std::string prenom_p):nom(nom_p), prenom(prenom_p){
    adresse = std::string("");
    telephone = std::string("");
}

// Méthodes

void personne::affiche() const {
    std::cout << "La personne decrit.e est "
    
        << getnom() << " " 
        << getprenom() << " habitant au" 
        << getadresse() << " et ayant pour telephone"
        << gettelephone() << std::endl;
    }


// getters
std::string personne::getnom() const{
    return nom;
}
std::string personne::getprenom() const{
    return prenom;
}
std::string personne::getadresse() const{
    return adresse;
}
std::string personne::gettelephone() const{
    return telephone;
}

// setters

void personne::setnom(std::string nom){
    this -> nom;
}
void personne::setprenom(std::string prenom){
    this -> prenom;
}
void personne::setadresse(std::string adresse){
    this -> adresse;
}
void personne::settelephone(std::string telephone){
    this -> telephone;
}

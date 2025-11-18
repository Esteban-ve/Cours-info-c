#include "Personne.h"
#include <iostream>
#include <string>


//  Constructeurs

personne::personne(std::string nom_p, std::string prenom_p, std::string adresse_p, std::string telephone_p): nom(nom_p), prenom(prenom_p),adresse(adresse_p), telephone(telephone_p) {;}
personne::personne(std::string nom_p, std::string prenom_p):nom(nom_p), prenom(prenom_p){
    adresse = std::string "";
    telephone = std::string "";
}

// Méthodes

void personne::affiche() const {
    std::cout << "La personne décrit.e est "
    
        << getnom() << " " 
        << getprenom() << " habitant au" 
        << getadresse() << " et ayant pour telephone"
        << gettelephone() << std::endl;
    }


// getters
std::string getnom() const{
    return nom;
}
std::string getprenom() const{
    return prenom;
}
std::string getadresse() const{
    return adresse;
}
std::string gettelephone() const{
    return telephone;
}

// setters

void setnom(std::string nom){
    this.nom=nom;
}
void setprenom(std::string prenom){
    this.prenom=prenom;
}
void setadresse(std::string adresse){
    this.adresse=adresse;
}
void settelephone(std::string telephone){
    this.telephone=telephone;
}

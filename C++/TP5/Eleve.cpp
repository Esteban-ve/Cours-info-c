#include "Personne.h"
#include "Eleve.h"
#include <iostream>
#include <string>



//  Constructeurs

eleve::eleve(std::string nom, std::string prenom):personne( nom, prenom) {
    promotion = std::string("");
    gpa = -1;
    groupe_td = std::string("");
}

// Methodes

void eleve::affiche() const {
    personne::affiche();
    std::cout<<" l'eleve est dans la promotion:"
    << getpromotion()<< ", pour GPD:"
    << getgpa()<< " et iel est dans le groupe de tp:"
    << getgroupe_td()<< std::endl;
}


// getters et setters

std::string eleve::getpromotion() const{
    return promotion;
}
float eleve::getgpa() const{
    return gpa;
}
std::string eleve::getgroupe_td() const{
    return groupe_td;
}


void eleve::setpromotion(std::string promotion){
    this -> promotion = promotion;
}

void eleve::setgroupe_td(std::string groupe_td){
    this -> groupe_td = groupe_td; 
}

void eleve::setgpa(float gpa){
    this -> gpa = gpa;
}



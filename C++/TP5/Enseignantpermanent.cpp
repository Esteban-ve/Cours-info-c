#include "Personne.h"
#include "Personnel.h"
#include "enseignantpermanent.h"
#include <iostream>
#include <string>



//  Constructeurs

enseignantpermanent::enseignantpermanent(std::string nom, std::string prenom):personnel( nom, prenom) {
    prime = 0;
    bureau = std::string("");
    grade = 0; 
}

// Methodes

float enseignantpermanent::calculsalaire() const{
    return getsalaire() + prime * grade / 100;
}

void enseignantpermanent::affiche() const {
    personnel::affiche();
    std::cout<<" grace aux heuressup iel gagne maintenant :"
    << calculsalaire()<< std::endl;
}


// getters et setters

std::string enseignantpermanent::getbureau() const{
    return bureau;
}

float enseignantpermanent::getprime() const{
    return prime;
}

int enseignantpermanent::getgrade() const {
    return grade;
}

void enseignantpermanent::setbureau(std::string bureau) {
    this -> bureau = bureau;
}

void enseignantpermanent::setprime(float prime) {
    this -> prime = prime;
}

void enseignantpermanent::setgrade(int grade) {
    this -> grade = grade;
}




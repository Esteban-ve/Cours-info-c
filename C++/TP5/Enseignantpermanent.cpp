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

void personneladmin::affiche() const {
    personnel::affiche();
    std::cout<<" grace aux heuressup iel gagne maintenant :"
    << calculsalaire()<< std::endl;
}


// getters et setters

std::string getbureau() const {
    return bureau;
}

float getprime() const {
    return prime;
}

int getgrade() const {
    return grade;
}

void setbureau(std::string bureau) {
    this -> bureau = bureau;
}

void setprime(float prime) {
    this -> prime = prime;
}

void setgrade(int grade) {
    this -> grade = grade;
}




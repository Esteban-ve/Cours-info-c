#include <iostream>
#include "Heure.h"


//  Verificateur de validité
bool heure::checkHeure(int h, int min){
    if (0<=h && h<24 && 0<min && min<=60) {
        return true;
    }
    else {false;};
}
bool heure::checkHeure() const {
    if (0<=h && h<24 && 0<min && min<=60) {
        return true;
    }
    else {false;};
}



//  Constructeur avec paramètres
heure::heure(int a, int b) : h(a), min(b) {
    if (checkHeure(a,b)){}
    else{
        std::cout << "L'heure est invalide" << std::endl;
    }
}   // avec paramètres

heure::heure(): h(0), min(0) {} // vide

//      Destructeur
heure::~heure() {}

//  Méthodes
void heure::affiche() const {
    std::cout << "La heure est jour: " 
        << h << " ,minute: " 
        << min <<  std::endl;   
    }

// getters
int heure::geth() const {
    return h;
}
int heure::getmin() const {
    return min;
}


// setters

void heure::seth(int a) {
    h=a;
    if (checkHeure()){}
    else{
        std::cout << "L'heure est invalide" << std::endl;
    };
}

void heure::setmin(int b) {
    min=b;
    if (checkHeure()){}
    else{
        std::cout << "L'heure est invalide" << std::endl;
    };
}




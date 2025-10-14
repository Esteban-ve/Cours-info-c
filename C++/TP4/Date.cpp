#include <iostream>
#include "Date.h"


//  Verificateur de validité
bool date::checkDate(int j, int m, int a){
    if (0<j && j<32 && 0<m && m<13 && 1999<a && a< 2051) {
        return true;
    }
    else {false;};
}
bool date::checkDate() const {
    if (0<d && d<32 && 0<m && m<13 && 1999<y && y< 2051) {
        return true;
    }
    else {false;};
}



//  Constructeur avec paramètres
date::date(int a, int b , int c) : d(a), m(b), y(c) {
    if (checkDate(a,b,c)){}
    else{
        std::cout << "La date est invalide" << std::endl;
    }
}   // avec paramètres

date::date(): d(1), m(1), y(2000) {} // vide

//      Destructeur
date::~date() {}

//  Méthodes
void date::affiche() const {
    std::cout << "La date est le " 
        << d << ", " 
        << m << ", " 
        << y << ")" << std::endl;   
    }

// getters
int date::getd() const {
    return d;
}
int date::getm() const {
    return m;
}
int date::gety() const {
    return y;
}

// setters

void date::setd(int a) {
    d=a;
    if (checkDate()){}
    else{
        std::cout << "La date est invalide" << std::endl;
    };
}

void date::setm(int b) {
    m=b;
    if (checkDate()){}
    else{
        std::cout << "La date est invalide" << std::endl;
    };
}

void date::sety(int c) {
    y=c;
    if (checkDate()){}
    else{
        std::cout << "La date est invalide" << std::endl;
    };
}



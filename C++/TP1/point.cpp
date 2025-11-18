#include "point.h"

// Initialisation du compteur
int point::compteur = 0;

//  Constructeur par défaut
point::point() : x(0.0), y(0.0), z(0.0) {
    compteur++;
}

//  Constructeur avec paramètres
point::point(double a, double b, double c) : x(a), y(b), z(c) {
    compteur++;
}

//  Constructeur de recopie
point::point(const point& autre) : x(autre.x), y(autre.y), z(autre.z) {
    compteur++;
}

//  Destructeur
point::~point() {
    compteur--;
}

//  Méthodes utilitaires
void point::initialize(double a, double b, double c) { 
    x = a; 
    y = b; 
    z = c; 
}

void point::setters(double a, double b, double c) { 
    x = a; 
    y = b; 
    z = c; 
}

//  Fonctions de calcul du milieu
double point::milieuX(double x2) const { 
    return (x + x2) / 2.0; 
}

double point::milieuY(double y2) const { 
    return (y + y2) / 2.0; 
}

double point::milieuZ(double z2) const { 
    return (z + z2) / 2.0; 
}

//  Compteur d’instances
int point::getCompteur() {
    return compteur;
}

//  Getters
double point::getX() const { 
    return x; 
}

double point::getY() const { 
    return y; 
}

double point::getZ() const { 
    return z; 
}

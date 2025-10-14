#include "date.h"

//  Verificateur de validité
Bool::checkDate(int j, int m, int a){
    if (0<j && j<32 && 0<m && m<13 && 1999<a && a< 2051) {
        return true
    }
    else {false}
}



//  Constructeur avec paramètres
date::date(int a, int b , int c) : d(a), m(b), y(c) {
    if checkDate(a,b,c){}
    else{
        std::cout << "La date est invalide" << std::endl;
    }
}   // avec paramètres

date::date(): d(1), m(1), y(2000) {} // vide

//      Destructeur
date::~date() {}



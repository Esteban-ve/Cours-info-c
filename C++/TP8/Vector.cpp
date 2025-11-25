#include "Vector.h"
#include <iostream>


vector::vector(){}

void vector::affiche() const{
    for (int i=0, i<taille, i++){
        std::cout<<tab[i]<<std::endl;
    }
}


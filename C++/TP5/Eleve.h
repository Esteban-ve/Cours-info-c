#ifndef PERSONNE_H
#define PERSONNE_H
#include "Personne.h"
#include <iostream>
#include <string>

class eleve: public personne {
private:
    std::string promotion;
    std::string groupe_td;
    float gpa;

public:

    eleve(); //par défault


    

};

#endif

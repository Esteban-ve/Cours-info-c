#ifndef PERSONNEL_H
#define PERSONNEL_H
#include "Personne.h"
#include <iostream>
#include <string>

class personnel: public personne {
private:

    float salaire;

public:

    personnel(std::string nom, std::string prenom); //par défault

    float calculsalaire() const;
    void affiche() const;

    // getters

    float getsalaire() const;

    // setters
  
    void setsalaire(float salaire);
    
};

#endif 

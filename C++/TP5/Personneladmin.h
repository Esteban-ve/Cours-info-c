#ifndef PERSONNELADMIN_H
#define PERSONNELADMIN_H
#include "Personne.h"
#include "Personnel.h"
#include <iostream>
#include <string>

class personneladmin: public personnel {
private:

    float taux;
    int heuressup;

public:

    personneladmin(std::string nom, std::string prenom); //par défault

    float calculsalaire() const override;
    void affiche() const override;

    // getters

    float gettaux() const;
    int getheuressup() const;

    // setters
  
    void settaux(float taux);
    void setheuressup(int heuressup);
    
};

#endif 

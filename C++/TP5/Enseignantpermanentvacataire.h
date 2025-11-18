#ifndef ENSEIGNANTVACATAIRE_H
#define ENSEIGNANTVACATAIRE_H
#include "Personne.h"
#include "Personnel.h"
#include <iostream>
#include <string>

class enseignantvacataire: public personnel {
private:

    std::string casier;
    float prime;
    int nbreHeures;

public:

    enseignantvacataire(std::string nom, std::string prenom); //par défault

    float calculsalaire() const;
    void affiche() const;

    // getters


    std::string getcasier() const;
    float getprime() const;
    int getnbreHeures() const;


    // setters

    void setcasier(const std::string casier);
    void setprime(float prime);
    void setnbreHeures(int nbreHeures);

    
};

#endif 

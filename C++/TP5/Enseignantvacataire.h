#ifndef ENSEIGNANTVACATAIRE_H
#define ENSEIGNANTVACATAIRE_H
#include "Personne.h"
#include "Personnel.h"
#include <iostream>
#include <string>

class enseignantvacataire: public personnel {
private:

    std::string casier;
    float taux;
    int nbreheures;

public:

    enseignantvacataire(std::string nom, std::string prenom); //par défault

    float calculsalaire() const override;
    void affiche() const override;

    // getters


    std::string getcasier() const;
    float gettaux() const;
    int getnbreheures() const;


    // setters

    void setcasier(const std::string casier);
    void settaux(float taux);
    void setnbreheures(int nbreheures);

    
};

#endif 

#ifndef ENSEIGNANTPERMANENT_H
#define ENSEIGNANTPERMANENT_H
#include "Personne.h"
#include "Personnel.h"
#include <iostream>
#include <string>

class enseignantpermanent: public personnel {
private:

    std::string bureau;
    float prime;
    int grade;

public:

    enseignantpermanent(std::string nom, std::string prenom); //par défault

    float calculsalaire() const override;
    void affiche() const override;

    // getters


    std::string getbureau() const;
    float getprime() const;
    int getgrade() const;


    // setters

    void setbureau(const std::string bureau);
    void setprime(float prime);
    void setgrade(int grade);

    
};

#endif 

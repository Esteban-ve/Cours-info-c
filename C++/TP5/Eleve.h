#ifndef ELEVE_H
#define ELEVE_H
#include "Personne.h"
#include <iostream>
#include <string>

class eleve: public personne {
private:
    std::string promotion;
    std::string groupe_td;
    float gpa;

public:

    eleve(std::string nom, std::string prenom); //par défault

    void affiche() const;

    // getters
    std::string getpromotion() const;
    std::string getgroupe_td() const;
    float getgpa() const;

    // setters
  
    void setpromotion(std::string promotion);
    void setgroupe_td(std::string groupe_td);
    void setgpa(float gpa);
    
};

#endif 

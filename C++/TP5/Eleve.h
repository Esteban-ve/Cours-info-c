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

    eleve(std::string nom, std::string prenom); //par défault


    // getters
    std::string getpromotion() const;
    std::string getgroupe_td() const;
    float getgpa() const;

    // setters
  
    void setpromotion(std::string promotion);
    void setgroupe_tp(std::string groupe_tp);
    void setgpa(float gpa);
    
};

#endif

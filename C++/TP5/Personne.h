#ifndef PERSONNE_H
#define PERSONNE_H
#include <iostream>
#include <string>

class Personne {
private:
    std::string nom;
    std::string prenom;
    std::string adresse;
    std::string telephone;

public:
    // Constructeurs
    personne(std::string nom, std::string prenom, std::string adresse, std::string telephone); // avec les tous les paramètres
    personne(std::string nom, std::string prenom) // avec 2 paramètres par défaults
    

    //  Méthodes
    void affiche() const;


    // getters
    int getnom() const;
    int getprenom() const;
    int getadresse() const;
    int gettelephone() const;

    // setters
  
    void setnom(std::string nom);
    void setprenom(std::string prenom);
    void setadresse(std::string adresse);
    void settelephone(std::string telephone);

};

#endif

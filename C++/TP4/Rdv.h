#ifndef RDV_H
#define RDV_H

#include "Date.h"
#include "Heure.h"
#include <string>

class rdv {
private:

    date d;
    heure horaire;
    std::string lieu;
    int nb_participants;
    std::string* list_participants;


public:
    // Constructeurs
    rdv(date dini, heure hini, std::string lini); // avec les paramètres
    
    // Destructeur
    ~rdv();

    //  Méthodes
    void inicialise(); // met le nb de participants à 0 = tapbleau de str ...
    void affiche() const;


    // getters
    date getd() const;
    heure gethoraire() const;
    std::string getlieu() const;
    int getnb_participants() const;
    std::string* getlist_participants() const;


    // setters
    date setd(date newdate) ;
    heure sethoraire( heure newh) ;
    std::string setlieu(std::string newl) ;
    int setnb_participants(int nb) ;
    std::string* setlist_participants(std::string* list) ;

};

#endif

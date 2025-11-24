#ifndef LISTEPERSONNEL_H
#define LISTEPERSONNEL_H
#include "Personnel.h"
#include <iostream>
#include <string>





class listepersonnel {
private:
    personnel* tab[100];
    int nb;

public:
    // Constructeurs
    listepersonnel();       
  

    //  Méthodes
    void ajout(personnel* ptpersonnel);
    void affichersalaire() const;

};

#endif

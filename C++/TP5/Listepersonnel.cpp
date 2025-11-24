#include "Listepersonnel.h"
#include "Personnel.h"
#include <iostream>
#include <string>



// Constructeurs
listepersonnel::listepersonnel(){
    nb=0;
}     
  

//  Méthodes
void listepersonnel::ajout(personnel* ptpersonnel){
    if (nb < 100){
        tab[nb]=ptpersonnel;
        nb= nb+1;
    }
    else {
        std::cout<<"la liste du personnel est pleine"<<std::endl;
    }

}
void listepersonnel::affichersalaire() const{
    for (int i=0; i < nb ;i++){
        std::cout
        <<tab[i]->getnom()
        <<" gagne "
        <<tab[i]->calculsalaire()
        <<std::endl;
    }
}
    


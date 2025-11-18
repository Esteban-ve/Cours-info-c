#include <iostream>
#include <string>
#include "Rdv.h"
#include "Date.h"
#include "Heure.h"



//  Constructeurs


rdv::rdv(date dini, heure hini, std::string lini): d(dini),horaire(hini),lieu(lini),nb_participants(0) {
    list_participants = new std::string[10];m           
} // avec les paramètres iniciaux



//      Destructeur
rdv::~rdv() {}



//  Méthodes
void rdv::affiche() const {
    std::cout << "La rdv est prevu pour le "
    
        << d.getd() << " " 
        << d.getm() << " " 
        << d.gety() << " "

        << "a " 
        << horaire.geth() << " heure et " 
        << horaire.getmin() << " minutes "
        
        << " a cet endroit "
        << lieu
        
        << " et il y aura "
        << nb_participants<< " de participants"
        
        <<std::endl;   
        if (nb_participants>0){
            std::cout<<": ";
        }
        for (int i = 0; i < nb_participants; i++) {
            std::cout << "- " << list_participants[i] << std::endl;
}
    }

void rdv::ajouteparticipant(const std::string& participant){
    if (nb_participants<10){
        list_participants[nb_participants] = participant;
        nb_participants++;
    }
    else{
        std::cout<< "Il y a déjà 10 participants et c'est le max"<<std::endl;
    }
};



// getters

date rdv::getd() const{
    return d;
}
heure rdv::gethoraire() const{
    return horaire;
}
std::string rdv::getlieu() const{
    return lieu;
}
int rdv::getnb_participants() const{
    return nb_participants;
}
std::string* rdv::getlist_participants() const{
    return list_participants;
}



    // setters
date rdv::setd(date newdate) {
    d=newdate;
};
heure rdv::sethoraire(heure newh) {
    horaire=newh;
};
std::string rdv::setlieu(std::string newl) {
    lieu=newl;
};
int rdv::setnb_participants(int nb){
    nb_participants=nb;
} ;
std::string* rdv::setlist_participants(std::string* list){
    list_participants=list;
} ;





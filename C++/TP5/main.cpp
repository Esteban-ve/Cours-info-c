#include "Personne.h"
#include "Eleve.h"
#include "Personnel.h"
#include "Personneladmin.h"
#include "Enseignantpermanent.h"
#include "Enseignantvacataire.h"
#include <iostream>
#include <string>



int main (){

    std::string pn= "Paul";
    std::string n= "Dupont";
    std::string tel= "07453955830";
    std::string promotion= "2026";
    eleve paul= eleve(n,pn);
    paul.settelephone(tel);
    paul.setpromotion(promotion);
    //paul.affiche();

    personnel luna= personnel(std::string("Chattam"), std::string("Luna"));
    luna.setsalaire(1750);
    //luna.affiche();

    personneladmin Luc = personneladmin(std::string("Moron"), std::string("Luc"));
    Luc.setsalaire(1000);
    Luc.settaux(0.1);
    Luc.setheuressup(50);
    //Luc.affiche();

    enseignantpermanent Math = enseignantpermanent(std::string("NC.Kintosh"), std::string("Math"));
    Math.setprime(300);
    Math.setgrade(50);
    Math.setbureau("La jetee");
    Math.setsalaire(1500);
    Math.affiche();

    enseignantvacataire Anne = enseignantvacataire(std::string("Joe"), std::string("Anne"));
    Anne.settaux(0.6);
    Anne.setnbreheures(35*4);
    Anne.setcasier("La maille 2");
    Anne.affiche();



    return 0;
    }


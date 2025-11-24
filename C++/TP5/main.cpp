    #include "Personne.h"
    #include "Eleve.h"
    #include "Personnel.h"
    #include "Personneladmin.h"
    #include "Enseignantpermanent.h"
    #include "Enseignantvacataire.h"
    #include "Listepersonnel.h"
    #include <iostream>
    #include <string>



    int main (){


        std::string pn = "Paul";
        std::string n = "Dupont";
        std::string tel = "07453955830";
        std::string promotion = "2026";
        eleve* paul = new eleve(n, pn);
        paul->settelephone(tel);
        paul->setpromotion(promotion);
        //paul->affiche();


        personnel* luna = new personneladmin("Chattam", "Luna");
        luna->setsalaire(1750);
        //luna->affiche();


        personneladmin* Luc = new personneladmin("Moron", "Luc");
        Luc->setsalaire(1000);
        Luc->settaux(0.1);
        Luc->setheuressup(50);
        //Luc->affiche();


        enseignantpermanent* Math = new enseignantpermanent("NC.Kintosh", "Math");
        Math->setprime(300);
        Math->setgrade(50);
        Math->setbureau("La jetee");
        Math->setsalaire(1500);
        //Math->affiche();


        enseignantvacataire* Anne = new enseignantvacataire("Joe", "Anne");
        Anne->settaux(0.6);
        Anne->setnbreheures(35 * 4);
        Anne->setcasier("Maille 2");
        //Anne->affiche();


        listepersonnel list;
        list.ajout(luna);
        list.ajout(Luc);
        list.ajout(Math);
        list.ajout(Anne);
        list.affichersalaire();



        return 0;
        }


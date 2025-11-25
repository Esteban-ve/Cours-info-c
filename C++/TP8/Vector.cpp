#include "Vector.h"
#include <iostream>
#include <string>

// Initialisation du compteur
int vector::nb_instance = 0;

vector::vector(){
    taille=0;
    tab=new double[taille];
    nb_instance++;
}

vector::vector(int taille){
    this->taille=taille;
    tab=new double[taille];
    nb_instance++;

}

vector::vector(double a){
    taille=1;
    tab=new double[taille];
    tab[0]= a;
    nb_instance++;
}
vector::vector(double a, double b){
    tab=new double[taille];
    tab[0]=a;
    tab[1]=b;
    taille=2;
    nb_instance++;
}
vector::vector(double a, double b, double c){
    tab=new double[taille];
    tab[0]=a;
    tab[1]=b;
    tab[2]=c;
    taille=3;
    nb_instance++;
}
vector::vector(double a, double b, double c, double d){
    tab=new double[taille];
    tab[0]=a;
    tab[1]=b;
    tab[2]=c;
    tab[3]=d;
    taille=4;
    nb_instance++;
}
void vector::affiche() const{
    for (int i=0; i<taille; i++){
        std::cout<<tab[i]<<std::endl;
    }
}

void vector::rempli(int emplacement,double a){
    if (emplacement<taille){
        tab[emplacement]=a;
    }
    else{
        std::cout<<"l'emplacement depasse la taille du vecteur"<<std::endl;
    }
}

vector vector::addition(vector a,vector b){
    if (a.taille=b.taille){
        vector res= vector(taille);
        for (int i; i<taille;i++){
            res.tab[i]=a.tab[i] + b.tab[i]
        }
    }
    else{
        std::cout<<"les vecteurs ont des tailles differentes"<<std::endl;
    }
}








void vector::printnb_instance() const{
    std::cout<<"il y a " << nb_instance<<"vecteurs de crée"<<std::endl;
}
int vector::getnb_instance() const{
    return nb_instance;
}
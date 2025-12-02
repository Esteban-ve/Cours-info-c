#include "Vector.h"
#include <iostream>
#include <string>

// Initialisation du compteur
int vector::nb_instance = 0;

// les constructeurs

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

// le destructeur
vector::~vector() {
    delete[] tab;
    nb_instance--;
}

// les méthodes

void vector::affiche() const{
    for (int i=0; i<taille; i++){
        std::cout<<tab[i]<<std::endl;
    }
}


void vector::printnb_instance() const{
    std::cout<<"il y a " << nb_instance<<"vecteurs de crée"<<std::endl;
}
int vector::getnb_instance() const{
    return nb_instance;
}


// les opérateurs

vector operator+(const vector& a, const vector& b)
{
    vector v= vector(int a*.taille);
    for (int i, i<taille, i++){
        v.[i]= a*.tab
    }
return vector();
}


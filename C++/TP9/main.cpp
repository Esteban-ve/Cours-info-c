#include "Tabk.h"

#include <iostream>
using namespace std;


template <class T, class U> void fct(T a, U b) {
cout << "je suis la fonction1" << endl;
}
template <class T, class U> void fct(T * a, U b) {
cout << "je suis la fonction 2" << endl;
}
template <class T> void fct(T, T, T) {
cout << "je suis la fonction 3" << endl;
}
void fct(int a, float b) {
cout << "Je suis la fonction 4" << endl;
}
template <class T> T somme ( int taille, const T* tab){
    if (taille == 0) {return T();}
    T res = tab[0];
    for (int i = 1; i < taille; i++) {
        res += tab[i];
    }
    return res;
}
template <class T> int minimum ( int taille, const T* tab){
    int mini = 0;
    for (int i = 0; i < taille; i++) {
        if (tab[mini]>tab[i]){mini=i;}
    }
    return mini;
}
template <class T, class U> int minimum ( int taille, const T* tab, const U* tab2){
    int mini = 0;
    for (int i = 0; i < taille; i++) {
        if (tab[mini]>tab[i] || tab[mini]=tab[i] && tab2[mini]>tab2[i]){mini=i;}
    }
    return mini;
}

int main(){


    int taille=6;
    int* letab=new int [taille];
    for ( int i=0; i < taille; i++){
        letab[i]=3*i;
    }
    cout<< minimum( taille, letab) << endl;


    string* tab=new string [taille];
    tab[0]="ZZZ";
    tab[1]="b";
    tab[2]="c";
    tab[3]="v";
    tab[4]="de";
    tab[5]="ZZZ";

    cout<< minimum( taille, tab,letab) << endl;

    /* 
    int n=0, p=0, q=0;
    float x=0.0, y=0.0;
    double z=0.0;
    cout << "fct (n, p) ;";
    fct(n, p);
    cout << "fct (x, y ) ;";
    fct(x, y);
    cout << "fct (n, x) ;";
    fct(n, x);
    cout << "fct (n, z) ;";
    fct(n, z);
    cout << "fct (&n, p) ;";
    fct(&n, p);
    cout << "fct (&n, x) ;";
    fct(&n, x);
    cout << "fct (&n, &p, &q);";
    fct(&n, &p, &q);

    int taille=5;
    int* letab=new int [taille];
    for ( int i=0; i <= taille; i++){
        letab[i]=i;
    }
    cout<< somme( 5, letab) << endl;

    int taille=6;
    float* letab=new float [taille];
    for ( int i=0; i < taille; i++){
        letab[i]=1.1;
    }
    cout<< somme( taille, letab) << endl;


    int taille=6;
    string* letab=new string [taille];
    for ( int i=0; i < taille; i++){
        letab[i]="label";
    }
    cout<< somme( taille, letab) << endl;

    int taille=6;
    int* letab=new int [taille];
    for ( int i=0; i < taille; i++){
        letab[i]=3*i;
    }
    cout<< minimum( taille, letab) << endl;


    */
    return 0;
}
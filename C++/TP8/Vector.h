#ifndef VECTOR_H
#define VECTOR_H
#include <iostream>

class vector {

private:
    int taille;
    double* tab;
    static int nb_instance;

public:

    vector();
    vector(int taille);
    vector(double a);
    vector(double a, double b);
    vector(double a, double b, double c);
    vector(double a, double b, double c, double d);
    void affiche() const;



    int getnb_instance() const;
    void printnb_instance() const;

    friend vector operator+( const vector& a,const vector& b);


};
#endif
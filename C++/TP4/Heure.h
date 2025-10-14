#ifndef HEURE_H
#define HEURE_H

class heure {
private:
    int d=1,m=1,y=2000;

    // Verificateur de validité
    bool checkHeure(int h, int m);
    bool checkHeure() const;

public:
    // Constructeurs
    heure(int a, int b); // avec les paramètres
    heure(); // par défault .ie sans paramètre
    
    // Destructeur
    ~heure();

    //  Méthodes
    void affiche() const;


    // getters
    int geth() const;
    int getm() const;


    // setters
    void seth(int a);
    void setm(int b);


};

#endif

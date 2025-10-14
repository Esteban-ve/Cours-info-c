#ifndef HEURE_H
#define HEURE_H

class heure {
private:
    int h=0,min=0;

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
    int getmin() const;


    // setters
    void seth(int a);
    void setmin(int b);


};

#endif

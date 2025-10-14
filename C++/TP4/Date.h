#ifndef DATE_H
#define DATE_H

class date {
private:
    int d=1,m=1,y=2000;

    // Verificateur de validité
    bool checkDate(int j, int m, int a);
    bool checkDate() const;

public:
    // Constructeurs
    date(int a, int b,int c); // avec les paramètres
    date(); // par défault .ie sans paramètre
    
    // Destructeur
    ~date();

    //  Méthodes
    void affiche() const;


    // getters
    int getd() const;
    int getm() const;
    int gety() const;

    // setters
    void setd(int a);
    void setm(int b);
    void sety(int c);

};

#endif

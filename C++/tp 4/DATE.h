#ifndef DATE_H
#define DATE_H

class date {
private:
    int d,m,y;

    // Verificateur de validité
    bool checkDate(int j, int m, int a);
    bool checkDate();

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
    int getj() const;

    // setters
    int setd(int a);
    int setm(int b);
    int setj(int c);

};

#endif

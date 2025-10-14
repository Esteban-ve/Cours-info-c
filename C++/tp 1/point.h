#ifndef POINT_H
#define POINT_H

class point {
private:
    double x, y, z;

    // compteur d’instances
    static int compteur;

public:
    // Constructeurs
    point();                     // par défaut
    point(double a,double b,double c); // avec les paramètres
    point(const point& autre);   // recopie

    // Destructeur
    ~point();

    // Méthodes utilitaires
    void initialize(double a, double b, double c);
    void setters(double a, double b, double c);

    // Getters
    double getX() const;
    double getY() const;
    double getZ() const;

    // Fonctions de calcul
    double milieuX(double x2) const;
    double milieuY(double y2) const;
    double milieuZ(double z2) const;

    // Méthode statique pour récupérer le compteur
    static int getCompteur();
};

#endif

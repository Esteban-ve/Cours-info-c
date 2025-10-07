#ifndef POINT_H
#define POINT_H

class point {
private:
    int x, y, z;

public:
    // Constructeur
    point(int a = 0, int b = 0, int c = 0);

    // Méthodes
    void initialize(int a, int b, int c);
    void setters(int a, int b, int c);
    void translate(int a, int b, int c);
    double milieuX(int x) const;
    double milieuY(int y) const;
    double milieuZ(int z) const;

    // Getters
    int getX() const;
    int getY() const;
    int getZ() const;
};

#endif // POINT_H

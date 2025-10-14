# Projet C++ : Classe `point`

## Description
Ce projet implémente une classe `point` en C++ permettant de manipuler des points dans un espace tridimensionnel (coordonnées x, y, z).  
Il met en œuvre les principes de la programmation orientée objet (encapsulation, constructeurs, destructeur, méthodes et attributs statiques).

## Fonctionnalités principales
- Constructeur par défaut (point initialisé à (0,0,0))
- Constructeur de recopie
- Constructeur avec paramètres utilisateur
- Destructeur
- Méthodes pour initialiser et modifier les coordonnées (`initialize`, `setters`)
- Accesseurs (`getX`, `getY`, `getZ`)
- Méthodes pour calculer le milieu entre deux points (`milieuX`, `milieuY`, `milieuZ`)
- Compteur statique d’instances de la classe

## Fichiers du projet
- `point.h` : Déclaration de la classe `point`
- `point.cpp` : Implémentation des méthodes de la classe
- `main.cpp` : Programme principal de test

## Exemple d’utilisation
```cpp
#include <iostream>
#include "point.h"

int main() {
    point p1(10, 2, 5);
    point p2(0, 0, 0);

    std::cout << "Coordonnées du point p1 : ("
              << p1.getX() << ", " << p1.getY() << ", " << p1.getZ() << ")" << std::endl;

    std::cout << "Milieu entre p1 et p2 : ("
              << p1.milieuX(p2.getX()) << ", "
              << p1.milieuY(p2.getY()) << ", "
              << p1.milieuZ(p2.getZ()) << ")" << std::endl;

    std::cout << "Nombre d'instances : " << point::getCompteur() << std::endl;

    return 0;
}
```

## Compilation et exécution
```bash
g++ main.cpp point.cpp -o main
./main
```

## Auteur
Esteban Veaulin  
Centrale Méditerranée - Projet C++ OOP

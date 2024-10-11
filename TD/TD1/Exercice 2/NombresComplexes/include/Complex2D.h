#ifndef COMPLEX2D_H
#define COMPLEX2D_H


#include <iostream>

class Complex2D {
private:
    double reel;
    double imaginaire;

public:
    // Constructeur par défaut
    Complex2D() : reel(0.0), imaginaire(0.0) {}

    // Constructeur avec valeurs réelle et imaginaire
    Complex2D(double r, double i) : reel(r), imaginaire(i) {}

    // Constructeur avec une seule valeur pour les deux
    Complex2D(double valeur) : reel(valeur), imaginaire(valeur) {}

    // Constructeur par copie
    Complex2D(const Complex2D& autre) : reel(autre.reel), imaginaire(autre.imaginaire) {}

    // Accesseurs (getters)
    double getReel() const {
        return reel;
    }

    double getImaginaire() const {
        return imaginaire;
    }

    // Mutateurs (setters)
    void setReel(double r) {
        reel = r;
    }

    void setImaginaire(double i) {
        imaginaire = i;
    }

    // Surcharge de l'opérateur '+'
    Complex2D operator+(const Complex2D& autre) const {
        return Complex2D(reel + autre.reel, imaginaire + autre.imaginaire);
    }

    // Surcharge de l'opérateur '-'
    Complex2D operator-(const Complex2D& autre) const {
        return Complex2D(reel - autre.reel, imaginaire - autre.imaginaire);
    }

    // Surcharge de l'opérateur '*'
    Complex2D operator*(const Complex2D& autre) const {
        double r = reel * autre.reel - imaginaire * autre.imaginaire;
        double i = reel * autre.imaginaire + imaginaire * autre.reel;
        return Complex2D(r, i);
    }

    // Surcharge de l'opérateur '/'
    Complex2D operator/(const Complex2D& autre) const {
        double denominateur = autre.reel * autre.reel + autre.imaginaire * autre.imaginaire;
        double r = (reel * autre.reel + imaginaire * autre.imaginaire) / denominateur;
        double i = (imaginaire * autre.reel - reel * autre.imaginaire) / denominateur;
        return Complex2D(r, i);
    }

    // Surcharge de l'opérateur '<' (comparaison basée sur le module)
    bool operator<(const Complex2D& autre) const {
        return (reel * reel + imaginaire * imaginaire) < (autre.reel * autre.reel + autre.imaginaire * autre.imaginaire);
    }

    // Surcharge de l'opérateur '>' (comparaison basée sur le module)
    bool operator>(const Complex2D& autre) const {
        return (reel * reel + imaginaire * imaginaire) > (autre.reel * autre.reel + autre.imaginaire * autre.imaginaire);
    }

    // Affichage du nombre complexe
    void afficher() const {
        std::cout << "(" << reel << ") + (" << imaginaire << ")i" << std::endl;
    }
};

#endif // COMPLEX2D_H

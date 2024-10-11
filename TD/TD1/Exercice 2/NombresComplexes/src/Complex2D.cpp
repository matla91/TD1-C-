#ifndef COMPLEX2D_H
#define COMPLEX2D_H

class Complex2D {
private:
    double reel;
    double imaginaire;

public:
    // Constructeurs
    Complex2D();                             // Constructeur par défaut
    Complex2D(double r, double i);           // Constructeur avec valeurs réelle et imaginaire
    Complex2D(double valeur);                // Constructeur avec une seule valeur pour les deux
    Complex2D(const Complex2D& autre);       // Constructeur par copie

    // Accesseurs (getters)
    double getReel() const;
    double getImaginaire() const;

    // Mutateurs (setters)
    void setReel(double r);
    void setImaginaire(double i);

    // Opérateurs arithmétiques
    Complex2D operator+(const Complex2D& autre) const;
    Complex2D operator-(const Complex2D& autre) const;
    Complex2D operator*(const Complex2D& autre) const;
    Complex2D operator/(const Complex2D& autre) const;

    // Opérateurs de comparaison
    bool operator<(const Complex2D& autre) const;
    bool operator>(const Complex2D& autre) const;

    // Méthode d'affichage
    void afficher() const;
};

#endif // COMPLEX2D_H

#ifndef COMPLEX2D_H
#define COMPLEX2D_H

class Complex2D {
private:
    double reel;
    double imaginaire;

public:
    // Constructeurs
    Complex2D();                             // Constructeur par d�faut
    Complex2D(double r, double i);           // Constructeur avec valeurs r�elle et imaginaire
    Complex2D(double valeur);                // Constructeur avec une seule valeur pour les deux
    Complex2D(const Complex2D& autre);       // Constructeur par copie

    // Accesseurs (getters)
    double getReel() const;
    double getImaginaire() const;

    // Mutateurs (setters)
    void setReel(double r);
    void setImaginaire(double i);

    // Op�rateurs arithm�tiques
    Complex2D operator+(const Complex2D& autre) const;
    Complex2D operator-(const Complex2D& autre) const;
    Complex2D operator*(const Complex2D& autre) const;
    Complex2D operator/(const Complex2D& autre) const;

    // Op�rateurs de comparaison
    bool operator<(const Complex2D& autre) const;
    bool operator>(const Complex2D& autre) const;

    // M�thode d'affichage
    void afficher() const;
};

#endif // COMPLEX2D_H

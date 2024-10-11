int main() {
    Complex2D z1(3, 4);      // Initialise z1 � 3 + 4i
    Complex2D z2(1, -2);     // Initialise z2 � 1 - 2i

    Complex2D somme = z1 + z2;
    Complex2D produit = z1 * z2;

    std::cout << "z1 = ";
    z1.afficher();

    std::cout << "z2 = ";
    z2.afficher();

    std::cout << "Somme = ";
    somme.afficher();

    std::cout << "Produit = ";
    produit.afficher();

    if (z1 > z2) {
        std::cout << "z1 a un module sup�rieur � z2." << std::endl;
    } else {
        std::cout << "z1 a un module inf�rieur ou �gal � z2." << std::endl;
    }

    return 0;
}

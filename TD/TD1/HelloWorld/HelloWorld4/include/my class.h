#ifndef MYCLASS_H
#define MYCLASS_H

#include <string>  // Nécessaire pour utiliser std::string

class MyClass {
    public:
        // Constructeur par défaut
        MyClass();

        // Constructeur qui prend une valeur string en argument
        MyClass(const std::string& value);

        // Méthode pour imprimer la variable privée
        void printMyElement() const;

        // Destructeur
        ~MyClass();

    private:

        std::string myString;
};

#endif // MYCLASS_H

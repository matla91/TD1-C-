#ifndef MYCLASS_H
#define MYCLASS_H

#include <string>  // N�cessaire pour utiliser std::string

class MyClass {
    public:
        // Constructeur par d�faut
        MyClass();

        // Constructeur qui prend une valeur string en argument
        MyClass(const std::string& value);

        // M�thode pour imprimer la variable priv�e
        void printMyElement() const;

        // Destructeur
        ~MyClass();

    private:

        std::string myString;
};

#endif // MYCLASS_H

#include "my class.h"
#include <iostream>


MyClass::MyClass() : myString("Valeur par d�faut") {}              //Constructeur par d�faut

MyClass::MyClass(const std::string& value) : myString(value) {}    //Constructeur avec string

void MyClass::printMyElement() const {
        std::cout << myString << std::endl;
}

MyClass::~MyClass() {}                                            //Destructeur

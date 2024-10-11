#include "my class.h"

int main() {

    MyClass defaultObject;
    defaultObject.printMyElement();   //affiche valeur par défaut


    MyClass customObject("Hello World!");
    customObject.printMyElement();

    return 0;
}

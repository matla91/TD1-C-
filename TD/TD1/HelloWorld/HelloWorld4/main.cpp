#include "my class.h"

int main() {

    MyClass defaultObject;
    defaultObject.printMyElement();   //affiche valeur par d�faut


    MyClass customObject("Hello World!");
    customObject.printMyElement();

    return 0;
}

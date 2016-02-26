#include <iostream>
#include "Identifiable.h"

int main() {
    Identifiable* id1 = new Identifiable();
    Identifiable* id2 = new Identifiable();
    Identifiable* id3 = new Identifiable();

    
    std::cout << "Id 1: " << id1->getId() << std::endl;
    std::cout << "Id 2: " << id2->getId() << std::endl;
    std::cout << "Id 3: " << id3->getId() << std::endl;

    delete id1;
    delete id2;
    delete id3;

    return 0;
}

#include <iostream>
#include "Countable.h"

int main() {
    Countable* c = new Countable();
    Countable* c1 = new Countable();
    Countable* c2 = new Countable();
    Countable* c3 = new Countable();

    std::cout << "Total count: " << Countable::getTotalCount() << std::endl;
    
    delete c2;

    std::cout << "Total count: " << Countable::getTotalCount() << std::endl;
    
    delete c;
    delete c1;
    delete c3;

    return 0;
}

#include <iostream>
#include "Passport.h"

int main() {
    Passport a;
    Passport b("Ruslana", "Nescheret", 05, 01, 1991);

    std::cout << a << std::endl;
    std::cout << b << std::endl;

    //b.setSeries('B', 'K', 986855);
    //b.setSeries('b', 'K', 986855);
    //b.setSeries('B', 'k', 986855);
    b.setSeries('B', 'K');

    std::cout << b << std::endl;

    return 0;
}

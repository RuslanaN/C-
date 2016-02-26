#include <iostream>
#include "Mohican.h"

int main() {
    Mohican* m1 = new Mohican(1111);
    Mohican* m2 = new Mohican(1112);
    Mohican* m3 = new Mohican(1113);
    Mohican* m4 = new Mohican(1114);

    std::cout << "Last Mohican id: " << Mohican::getLast().getId() << std::endl;

    delete m2;
    delete m3;
    delete m4;

    std::cout << "Last Mohican id: " << Mohican::getLast().getId() << std::endl;

    //delete m1;

    return 0;
}

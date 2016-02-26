#include <iostream>
#include "Unit.h"

int main() {
    Unit barbarian("Barbarian", 200, 20);
    Unit knight("Knight", 180, 25);
    
    std::cout << barbarian << std::endl;
    std::cout << knight << std::endl;
    
    //barbarian.attack(knight);
    try {
        barbarian.attack(knight);
    } catch (UnitIsDead) {
        std::cout << "Unit is dead!" << std::endl;
    }

    std::cout << barbarian << std::endl;
    std::cout << knight << std::endl;

    barbarian.addHitPoints(10);
    knight.addHitPoints(15);

    std::cout << barbarian << std::endl;
    std::cout << knight << std::endl;
    
    return 0;
}

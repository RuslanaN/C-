#include <iostream>

#include "Car.h"
#include "Point.h"

int main() {
    Car* car = new Car();
    
    std::cout << *car<< std::endl;
    std::cout << "******************" << std::endl;
    
    car->refill(60);
    
    /*try {
        car->refill();
    } catch (ToMuchFuel) {
        std::cout << "Much Fuel!" << std::endl;
    }*/
    
    std::cout << *car << std::endl;
    
    std::cout << "******************" << std::endl;
    
    car->drive(Point(5, 11));
    
    try {
        car->drive(Point(5, 11));
    } catch (OutOfFuel) {
        std::cout << "No Fuel!" << std::endl;
    }
    
    std::cout << *car << std::endl;
    
    delete car;
    
    return 0;
}

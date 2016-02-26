#include <iostream>
#include "Pen.h"
#include "Paper.h"

int main() {
    Pen* pen = new Pen();
    Paper* paper = new Paper();
    
    
    std::cout << "Paper: " << paper->getSymbols() << "/" << paper->getMaxSymbols() << std::endl;
    std::cout << "Pen: " << pen->getInkAmount() << "/" << pen->getInkCapacity() << std::endl;
    
    pen->write(*paper, "Hello world!");
    paper->show();

    std::cout << "Paper: " << paper->getSymbols() << "/" << paper->getMaxSymbols() << std::endl;
    std::cout << "Pen: " << pen->getInkAmount() << "/" << pen->getInkCapacity() << std::endl;
    
    delete pen;
    delete paper;

    return 0;
}

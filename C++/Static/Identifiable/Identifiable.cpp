#include <iostream>
#include "Identifiable.h"

int Identifiable::lastId = 1;
    
Identifiable::Identifiable() {
    this->id = lastId;
    lastId += 1;
}
        
Identifiable::~Identifiable() {
        
}

int Identifiable::getId() const {
    return id;
}

#include <iostream>
#include "Mohican.h"

Mohican* Mohican::last = NULL;

Mohican::Mohican(int id) : id(id) {
    //this->id = id;
    if ( last == NULL ) {
        last = this;
        prev = NULL;
        next = NULL;
    } else {
        prev = last;
        last->next = this;
        last = this;
        next = NULL;
    }
}
    
Mohican::~Mohican() {
    if ( next == NULL ) {
        last = prev;
        prev->next = NULL;
    } else {
        prev->next = next;
        next->prev = prev;
    }
}
    
const Mohican& Mohican::getLast() {
    return *last;
}

int Mohican::getId() const {
    return id;
}

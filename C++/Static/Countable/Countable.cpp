#include <iostream>
#include "Countable.h"

int Countable::totalCount = 0;

Countable::Countable() {
    totalCount += 1;
}
Countable::~Countable() {
    totalCount -= 1;
}

int Countable::getTotalCount() {
    return totalCount;
}

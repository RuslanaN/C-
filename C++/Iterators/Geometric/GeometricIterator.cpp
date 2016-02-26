#include <iostream>
#include "GeometricIterator.h"

GeometricIterator::GeometricIterator(int first, int step, int amount) {
    this->first = first;
    this->step = step;
    this->amount = amount;
    this->current = first;
    this->currentIndex = 1;

    if ( first == 0 || step == 0 ) {
        throw InvalidParam();
    }
}

bool GeometricIterator::over() {
    return currentIndex > amount;
}

void GeometricIterator::next() {
    if ( over() ) {
        return;
    }
    current *= step;
    currentIndex += 1;
}

void GeometricIterator::previous() {
    int previous = current / step;
    currentIndex -= 1;

    if ( previous < first ) {
        return;
    }
}

int GeometricIterator::value() {
    return current;
}

int GeometricIterator::begin() {
    return first;
    currentIndex = 1;
}

void GeometricIterator::operator++() {
    next();
}

void GeometricIterator::operator++(int) {
    operator++();
}

void GeometricIterator::operator--() {
    previous();
}

void GeometricIterator::operator--(int) {
    operator--();
}

int GeometricIterator::operator*() {
    return value();
}

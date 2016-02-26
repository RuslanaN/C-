#include <iostream>
#include "FactorialIterator.h"

FactorialIterator::FactorialIterator(int number) {
    this->number = number;
    this->current = 1;
    this->result = 1;

    if ( number < 0 ) {
        throw InvalidParam();
    }
}

bool FactorialIterator::over() {
    return current > number;
}

void FactorialIterator::next() {
    if ( over() ) {
        return;
    }
    result *= current;
    current += 1;
}

void FactorialIterator::previous() {
    int previous = result / current;
    current -= 1;

    if ( previous < 1 ) {
        return;
    }
}

int FactorialIterator::value() {
    return result;
}

int FactorialIterator::begin() {
    result = 1;
    current = 1;
}

void FactorialIterator::operator++() {
    next();
}

void FactorialIterator::operator++(int) {
    operator++();
}

void FactorialIterator::operator--() {
    previous();
}

void FactorialIterator::operator--(int) {
    operator--();
}

long long FactorialIterator::operator*() {
    return value();
}

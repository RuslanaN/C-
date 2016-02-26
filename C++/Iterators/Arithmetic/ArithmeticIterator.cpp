#include <iostream>
#include "ArithmeticIterator.h"

ArithmeticIterator::ArithmeticIterator(int first, int step, int limit) {
    this->first = first;
    this->step = step;
    this->limit = limit;
    this->current = first;

    if ( first > limit || step == 0 ) {
        throw InvalidParam();
    }
}

void ArithmeticIterator::next() {
    if ( over() ) {
        return;
    }
    current += step;
}

void ArithmeticIterator::previous() {
    int previous = current - step;

    if ( previous < first ) {
        return;
    }
}

bool ArithmeticIterator::over() {
    return current > limit;
}

int ArithmeticIterator::value() {
    return current;
}

int ArithmeticIterator::begin() {
    return first;
}

int ArithmeticIterator::end() {
    return limit;
}

void ArithmeticIterator::operator++() {
    next();
}

void ArithmeticIterator::operator++(int) {
    operator++();
}

void ArithmeticIterator::operator--() {
    previous();
}

void ArithmeticIterator::operator--(int) {
    operator--();
}

int ArithmeticIterator::operator*() {
    return value();
}

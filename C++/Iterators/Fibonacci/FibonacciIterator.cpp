#include "FibonacciIterator.h"

FibonacciIterator::FibonacciIterator(int number) {
    this->number = number;

    array = (int*)malloc(number*sizeof(int));
    if ( array == NULL ) {
        throw OutOfMemory();
    }
    array[0] = 0;
    array[1] = 1;
}

bool FibonacciIterator::over() { 
    return current >= number;
}

void FibonacciIterator::next() {
    if ( over() ) {
        return;
    }
    current += 1;
    if ( limit <= current ) {
        limit += 1;
        if ( current > 1 ) {
            array[current] = array[current-1] + array[current-2];
        }
    }
 }

void FibonacciIterator::operator++() {
    next();
}

void FibonacciIterator::operator++(int) {
    operator++();
}


void FibonacciIterator::begin() {
   current = 0; 
}

int FibonacciIterator::getValue() {
    if ( current < 0 ) {
        int newCurrent = current;

        newCurrent *= -1;
        if ( newCurrent % 2 == 0 ) {

            return array[newCurrent] * -1;
        }

        return array[newCurrent];
    }

    return array[current];
}

int FibonacciIterator::operator*() {
    return getValue();
}

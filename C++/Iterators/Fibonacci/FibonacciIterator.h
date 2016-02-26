#ifndef FIBONACCIITERATOR_H
#define FIBONACCIITERATOR_H

#include <iostream>
#include <cstdlib>

class OutOfMemory {};

class FibonacciIterator {
    private:
        int* array;
        int number;
        int current;
        int limit;

    public:
        FibonacciIterator(int number=10);

        bool over();
        void next();
        void previous();

        void operator++();
        void operator++(int);
        int operator*();

        void begin();
        int getValue();
};

#endif //FIBONACCIITERATOR_H
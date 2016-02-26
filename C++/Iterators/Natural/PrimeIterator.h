#ifndef PRIMEITERATOR_H
#define PRIMEITERATOR_H

#include <iostream>
#include <cstdlib>
#include <cmath>

class OutOfMemory{};

class PrimeIterator {
    private:
        int* array;
        int number;
        int current;
        int limit;
    
    public:
        PrimeIterator(int number = 100);
        
        bool over();
        void next();
        void previous();
        void begin();
        
        int getValue() const;

        void operator++();
        void operator++(int);
        void operator--();
        void operator--(int);
        int operator*();

};

#endif // PRIMEITERATOR_H
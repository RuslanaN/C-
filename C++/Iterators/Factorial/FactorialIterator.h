#ifndef FACTORIALITERATOR_H
#define FACTORIALITERATOR_H

#include <iostream>

class InvalidParam{};

class FactorialIterator {
    private:
        int number;
        int current;
        long long result;

    public:
        FactorialIterator(int number = 5);

        bool over();
        void next();
        void previous();
        int value();
        int begin();

        void operator++();
        void operator++(int);
        void operator--();
        void operator--(int);
        long long operator*();

};

#endif //FACTORIALITERATOR_H
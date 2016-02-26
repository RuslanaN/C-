#ifndef GEOMETRICITERATOR_H
#define GEOMETRICITERATOR_H

#include <iostream>

class InvalidParam{};

class GeometricIterator {
    private:
        int first;
        int amount;
        int step;
        int current;
        int currentIndex;

    public:
        GeometricIterator(int first = 1, int step = 2, int amount = 5);

        bool over();
        void next();
        void previous();
        int value();
        int begin();

        void operator++();
        void operator++(int);
        void operator--();
        void operator--(int);
        int operator*();

};

#endif //GEOMETRICITERATOR_H
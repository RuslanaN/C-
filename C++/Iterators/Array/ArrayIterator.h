#ifndef ARRAYITERATOR_H
#define ARRAYITERATOR_H

#include <iostream>

class InvalidIndex {};

template <class Type>
class ArrayIterator {
    private:
        Type* array;
        size_t limit;
        size_t current;

    public:
        ArrayIterator(Type* value, size_t size) {
            this->array = value;
            this->limit = size -1;
            this->current = 0;
        }

        bool over() const {
            return current > limit;
        }

        void next() {
            if ( over() ) {
                return;
            }
            current += 1;
        }

        void previous() {
            if ( current <= 0 ) {
                return;
            }
            current -= 1;
        }

        void begin() {
            current = 0;
        }

        void operator++() {
            next();
        }

        void operator++(int) {
            operator++();
        }

        void operator--() {
            previous();
        }

        void operator--(int) {
            operator--();
        }

        bool less() const { 
            return current <= 0;
        }

        const Type& value() const { 
            return array[current];
        }

        const Type& operator*() const {
            return value();
    }
};

#endif //ARRAYITERATOR_H
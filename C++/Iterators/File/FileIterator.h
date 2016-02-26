#ifndef FILEITERATOR_H
#define FILEITERATOR_H

#include <iostream>
#include <cstdlib>
#include <fstream>

class OutOfMemory {};

template <class Type>
class FileIterator {
    private:
        Type* pointer;
        size_t current;
        size_t maxSize;
        std::ifstream file;

    public:
        FileIterator(const char* fileName) : file(fileName), current(0), maxSize(100) {
            pointer = (Type*)malloc(maxSize*sizeof(Type));
            if ( pointer == NULL ) {
                    throw OutOfMemory();
            }
            if ( file.is_open() ) {
                file >> *pointer;
            }
        }

        bool over() {
            return file.eof();
        }

        void next() {
            if ( over() ) {
                return;
            }

            if ( current == maxSize ) {
                maxSize += 100;
                Type* newPointer = (Type*)realloc(pointer, maxSize*sizeof(Type));

                if ( newPointer == NULL ) {
                    throw OutOfMemory();
                }

                pointer = newPointer;
            }
            current += 1;
            file >> pointer[current];
        }

        void operator++() { next(); }

        void operator++(int) { operator++(); }

        const Type& getValue() const {
            return pointer[current];
        }

        const Type& operator*() { return getValue(); }
};

#endif //FILEITERATOR_H

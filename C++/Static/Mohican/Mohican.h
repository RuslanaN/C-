#ifndef MOHICAN_H
#define MOHICAN_H
#include <iostream>

class Mohican {
    private:
        static Mohican* last;
        Mohican *prev;
        Mohican *next;
        int id;
    
    public:
        Mohican(int id);
        ~Mohican();

        static const Mohican& getLast();
        int getId() const;
};

#endif //MOHICAN_H

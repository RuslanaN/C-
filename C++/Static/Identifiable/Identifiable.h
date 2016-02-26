#ifndef IDENTIFIABLE_H
#define IDENTIFIABLE_H
#include <iostream>

class Identifiable {
    private:
        static int lastId;
        int id;
        
    public:
        Identifiable();
        ~Identifiable();
        int getId() const;
};

#endif //IDENTIFIABLE_H

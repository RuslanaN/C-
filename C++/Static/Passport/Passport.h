#ifndef PASSPORT_H
#define PASSPORT_H

#include <iostream>
#include "Date.h"

class OutOfSeries {};
class InvalidSeries {};

class Passport {
    private:
        static int lastId;
        int id;
        static char lastSeries1, lastSeries2;
        char series1, series2; 
        std::string name;
        std::string surname;
        Date date;

        void validate();

    public:
        Passport(const std::string &name="Ivan", const std::string &surname="Ivanov", int day=1, int month=1, int year=1970);
        ~Passport();

        int getId() const;
        char getSeries1() const;
        char getSeries2() const;
        const std::string& getName() const;
        const std::string& getSurname() const;
        Date getDate() const;
        void setSeries(char series1, char series2, int id = 1);
};

std::ostream& operator<<(std::ostream& out, const Passport& passport);

#endif //PASSPORT_H

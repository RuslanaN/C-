#include <iostream>
#include <iomanip>
#include "Passport.h"

char Passport::lastSeries1 = 'A';
char Passport::lastSeries2 = 'A';
int Passport::lastId = 0;

void Passport::validate() {
    if ( lastId < 1000000 ) {
        lastId += 1;
        id = lastId;
        series1 = lastSeries1;
        series2 = lastSeries2;
    } else if ( lastId == 1000000 ) {
        lastId = 0;
        lastSeries2 += 1;
    } else if ( lastId == 1000000 && lastSeries2 > 'Z' ) {
        lastId = 0;
        lastSeries1 += 1;
        lastSeries2 = 'A';
    } else {
        throw OutOfSeries();
    }
}

Passport::Passport(const std::string &name, const std::string &surname, int day, int month, int year) {
    this->name = name;
    this->surname = surname;
    this->date = Date(day, month, year);

    validate();
}

Passport::~Passport() {}

int Passport::getId() const {
    return id;
}

char Passport::getSeries1() const {
    return series1;
}

char Passport::getSeries2() const {
    return series2;
}

const std::string& Passport::getName() const {
    return name;
}

const std::string& Passport::getSurname() const {
    return surname;
}

Date Passport::getDate() const {
    return date;
}

void Passport::setSeries(char series1, char series2, int id) {
        if ( series1 < 'A' || series1 > 'Z' ) {
            throw new InvalidSeries();
        }
        if ( series2 < 'A' || series2 > 'Z' ) {
            throw new InvalidSeries();
        }

        this->series1 = series1;
        this->series2 = series2;
        this->id = id;
}

std::ostream& operator<<(std::ostream& out, const Passport& passport) {
    out << "Passport No: " << passport.getSeries1() << passport.getSeries2() << std::setfill('0') <<  std::setw(6) << passport.getId() << std::endl;
    out << "Surname: " << passport.getSurname() << std::endl;
    out << "Name: " << passport.getName() << std::endl;
    out << "Date of Birth: " << passport.getDate() << std::endl;

    return out;
}

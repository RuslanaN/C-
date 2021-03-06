#include <iostream>
#include <iomanip>
#include "Date.h"

void Date::validate(int day, int month, int year) {
    if ( day < 1 || day > 31 ) {
        throw InvalidDate("Invalid Day!");
    }
    if ( month < 1 || month > 12 ) {
        throw InvalidDate("Invalid Month!");
    }
    if ( year < 0 ) {
        throw InvalidDate("Invalid Year!");
    }
    if ( month == 2 || month == 4 || month == 6 || month == 9 || month == 11 ) {
        if ( day == 31) {
            throw InvalidDate("Invalid Month!");
        }
    }
    if ( day == 30 && month == 2 ) {
        throw InvalidDate("Invalid Month!");
    }
    if ( year % 4 != 0 ) {
        if  ( day == 29 && month == 2 ) {
            throw InvalidDate("Error, February has 28 days!");
        }
    }
}

Date::Date(int day, int month, int year) {
    this->day = day;
    this->month = month;
    this->year = year;
    
    validate(day, month, year);
}

Date::~Date() {

}

int Date::getDay() const {
    return day;
}

int Date::getMonth() const {
    return month;
}

int Date::getYear() const {
    return year;
}

std::ostream& operator<<(std::ostream& out, const Date& date) {
    out << "(" << std::setfill('0') <<  std::setw(2) << date.getDay() << ',' <<  std::setw(2) << date.getMonth()
        << ',' <<  std::setw(4) << date.getYear() << ")" << std::endl;

    return out;
}


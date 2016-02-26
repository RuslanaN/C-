#include <iostream>
#include "Date.h"

int main() {
    Date* date = new Date();
    Date* date2 = new Date(29, 02, 1896);
    Date* date3 = new Date(03, 10, 2003);

     /*try {
        //Date ();
        date.validate(Date(32, 06, 1997));
       // date.validate(day, month, year);
    } catch (InvalidDate) {
        std::cout << "Incorrect day!" << std::endl;
    } catch (InvalidDate) {
        std::cout << "Invalid Month!" << std::endl;
    } catch (InvalidDate) {
        std::cout << "Invalid Year!" << std::endl;
    }*/

    std::cout << *date << std::endl;
    std::cout << *date2 << std::endl;
    std::cout << *date3 << std::endl;

    delete date;
    delete date2;
    delete date3;

    return 0;
}

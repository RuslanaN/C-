#include <iostream>
#include "Point.h"

int main() {
	Point a(2, 7);
	Point b(3, 8);
	Point c;

	if ( a == b ) {
		std::cout << a << " is equal to " << b << std::endl;
	} else {
		std::cout << a << " is not equal to " << b << std::endl;
	}

	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	std::cout << "c: " << c << std::endl;
	std::cout << "Distance: " << a.distance(b) << std::endl;
	
	return 0;
}

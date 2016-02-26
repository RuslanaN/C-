#include <iostream>
#include "Vector.h"

int main() {
	Vector a(7, 15);
	Vector b(0.15, 10);
	
	if ( a == b ) {
		std::cout << " is equal to " << std::endl;
	} else {
		std::cout << " is not equal to " << std::endl;
	}
	
	a += b;
	a -= b;
	
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << "a + b = " << a + b << std::endl;
	std::cout << "a - b = " << a - b << std::endl;
	std::cout << a.len() << std::endl;
	
	return 0;
}

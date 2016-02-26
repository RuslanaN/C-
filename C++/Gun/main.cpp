#include <iostream>
#include "Gun.h"

int main() {
	Gun* gun = new Gun();
	Gun* colt = new Gun("Colt", 10);

	std::cout << *gun << std::endl;
	std::cout << "****************" << std::endl;
	std::cout << *colt << std::endl;
	std::cout << "----------------" << std::endl;

	gun->reload();
	gun->prepare();
	
	std::cout << *gun << std::endl;
	
	gun->shoot();
	
	std::cout << *gun << std::endl;
	std::cout << "****************" << std::endl;
	
	colt->reload();
	colt->prepare();
	
	std::cout << *colt << std::endl;
	
	colt->shoot();
	colt->shoot();
	colt->shoot();
	
	std::cout << *colt << std::endl;
	
	delete gun;
	delete colt;
	
	return 0;
}

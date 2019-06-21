#include "Age.h"
#include <iostream>

Age::Age() {
	bicycle_age = 0;
}

void Age::printAge() {
	std::cout << "Your 'new' bike is " << bicycle_age << " years old!" << std::endl;
}

// setter and getter
void Age::setBicycle_age(int ba) {
	bicycle_age = ba;
}

int Age::getBicycle_age() {
	return bicycle_age;
}
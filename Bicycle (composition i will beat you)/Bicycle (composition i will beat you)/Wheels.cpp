#include "Wheels.h"
#include <iostream>

Wheels::Wheels() {
	wheels_color = "red";
}

void Wheels::printColor() {
	std::cout << "and wheels colored in " << wheels_color << "! ";
}
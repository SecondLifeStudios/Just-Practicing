#include "Bicycle.h"
#include <iostream>

Bicycle::Bicycle(std::string bn)
	: bicycle_name(bn)
{
}

Bicycle::Bicycle(std::string bn, std::string wc)
{
	bicycle_name = bn;
	WheelsObj.setWheels_color = wc;
}

void Bicycle::printNameAndColor() { // "and color" is just to remind me that this is the final function which prints out both name and color
	std::cout << "You picked a bike called " << bicycle_name << " ";
	WheelsObj.printColor();
	//ConditionObj.printConditionLevel();
}

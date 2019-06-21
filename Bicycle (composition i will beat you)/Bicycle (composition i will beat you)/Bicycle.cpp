#include "Bicycle.h"
#include <iostream>

Bicycle::Bicycle(std::string bn)
	: bicycle_name(bn)
{
}

Bicycle::Bicycle(std::string bn, std::string wc)
{
	bicycle_name = bn;
	WheelsObj.setWheels_color(wc);
}

Bicycle::Bicycle(std::string bn, std::string wc, std::string cl) {
	bicycle_name = bn;
	WheelsObj.setWheels_color(wc);
	ConditionObj.setCondition_level(cl);
}

Bicycle::Bicycle(std::string bn, std::string wc, std::string cl, int ba) {
	bicycle_name = bn;
	WheelsObj.setWheels_color(wc);
	ConditionObj.setCondition_level(cl);
	AgeObj.setBicycle_age(ba);
}

void Bicycle::printNameAndColor()  // "and color" is just to remind me that this is the final function which prints out both name and color
{
	// print out name
	std::cout << "You picked a bike called " << bicycle_name << " ";
	WheelsObj.printColor();
	ConditionObj.printCondition_level();
	AgeObj.printAge();
}
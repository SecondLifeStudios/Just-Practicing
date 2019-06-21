#include "Wheels.h"
#include <iostream>

Wheels::Wheels()
{
	wheels_color = "red";
}

void Wheels::printColor()
{
	// print out color and end the line
	std::cout << "and wheels colored in " << wheels_color << "! ";
}

// Set and get functions
void Wheels::setWheels_color(std::string swc)
{
	wheels_color = swc;
}
std::string Wheels::getWheels_color()
{
	return wheels_color;
}
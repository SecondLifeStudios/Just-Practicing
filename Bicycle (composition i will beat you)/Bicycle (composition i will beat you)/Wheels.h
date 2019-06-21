#pragma once
#include <string>

class Wheels
{
public:
	// Default constructor
	Wheels();

	void printColor();

	void setWheels_color(std::string swc);
	std::string getWheels_color();

private:
	std::string wheels_color;
};



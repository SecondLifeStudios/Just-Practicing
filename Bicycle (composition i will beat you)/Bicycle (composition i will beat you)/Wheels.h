#pragma once
#include <string>

class Wheels
{
public:
	void setWheels_color(std::string swc) {
		wheels_color = swc;
	}
	std::string getWheels_color() {
		return wheels_color;
	}
	Wheels(std::string wc);
	Wheels(){}
	void printColor();
private:
	std::string wheels_color;
};


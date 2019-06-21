#include <iostream>
#include "Bicycle.h"
#include <string>

int main()
{
	Wheels w_color("red");

	Bicycle printBicycleInformation_noColorSelected("Gustaf");
	Bicycle printBicycleInformation_ColorSelected("Gustaf", "orange");

	printBicycleInformation_noColorSelected.printNameAndColor();

	std::cout << std::endl;
	std::cout << std::endl;

	printBicycleInformation_ColorSelected.printNameAndColor();

}


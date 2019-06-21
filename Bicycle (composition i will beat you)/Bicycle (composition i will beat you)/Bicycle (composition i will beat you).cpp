#include <iostream>
#include "Bicycle.h"
#include <string>

int main()
{
	Bicycle printBicycleInformation_noColorSelected("Gustaf");
	Bicycle printBicycleInformation_ColorButNoConditionSelected("Gustaf", "blue");
	Bicycle printBicycleInformation_ColorAndConditionButNoAgeSelected("Gustaf", "blue", "great");
	Bicycle printBicycleInformation_ColorAndConditionAndAgeSelected("Gustaf", "orange", "good", 12);

	printBicycleInformation_noColorSelected.printNameAndColor();
	printBicycleInformation_ColorButNoConditionSelected.printNameAndColor();
	printBicycleInformation_ColorAndConditionButNoAgeSelected.printNameAndColor();
	printBicycleInformation_ColorAndConditionAndAgeSelected.printNameAndColor();

}


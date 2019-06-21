#pragma once
#include "Wheels.h"
#include "Condition.h"
#include <string>

class Bicycle
{
public:
	Bicycle(std::string bn);
	Bicycle(std::string bn, std::string dc);
	Bicycle(){}
	void printNameAndColor();
private:
	std::string bicycle_name;
	Wheels WheelsObj;
	//Condition ConditionObj;
};

 
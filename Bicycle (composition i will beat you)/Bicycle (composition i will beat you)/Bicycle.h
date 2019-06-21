#pragma once
#include "Wheels.h"
#include "Condition.h"
#include "Age.h"
#include <string>

class Bicycle
{
public:
	Bicycle(std::string bn);
	Bicycle(std::string bn, std::string wc);
	Bicycle(std::string bn, std::string wc, std::string cl);
	Bicycle(std::string bn, std::string wc, std::string cl, int ba);
	Bicycle() {}
	void printNameAndColor();
private:
	std::string bicycle_name;
	Wheels WheelsObj;
	Condition ConditionObj;
	Age AgeObj;
};


#pragma once
#include <string>
class Condition
{
public:
	Condition();
	void printCondition_level();
	void setCondition_level(std::string cl);
	std::string getCondition_level();
private:
	std::string condition_level;
};


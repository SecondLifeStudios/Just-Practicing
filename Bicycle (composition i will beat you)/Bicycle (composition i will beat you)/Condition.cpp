#include "Condition.h"
#include <iostream>
#include <string>

Condition::Condition() {
	condition_level = "average";
}

void Condition::printCondition_level() {
	std::cout << "Apart of that, the condition of the bicycle is " << condition_level << "! ";
}

void Condition::setCondition_level(std::string cl) {
	condition_level = cl;
}

std::string Condition::getCondition_level() {
	return condition_level;
}
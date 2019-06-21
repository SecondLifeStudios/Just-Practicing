#include "pm_selected.h"
#include "pm_available.h"
#include <iostream>
#include <string>

pm_selected::pm_selected(std::string m, pm_available p)
: model_selected(m), paObj(p)
{
}

void pm_selected::Output() {
	std::cout << "You are currently using " << model_selected << "!";
	paObj.showAvailable();
}
#include "pm_available.h"
#include <iostream>

pm_available::pm_available(int a) {
	amount_available = a;
}

void pm_available::showAvailable() {
	std::cout << "There are still " << amount_available << " models left to explore!";
}

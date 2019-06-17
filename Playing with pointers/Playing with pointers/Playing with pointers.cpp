#include "prc.h"
#include <iostream>


int main()
{
	prc Show;
	prc* Show_ptr = &Show;

	Show.printText();

	Show_ptr->printText();


}

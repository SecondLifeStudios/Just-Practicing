#include <iostream>
#include "pm_available.h"
#include "pm_selected.h"

int main()
{
	pm_available paObj(21);

	pm_selected print_selected_model("MRCL", paObj);
	print_selected_model.Output();
}


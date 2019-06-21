#pragma once
class pm_selected
{
public:
	pm_selected(std::string m, pm_available p);
	void Output();
private:
	std::string model_selected;
	pm_available paObj;
};


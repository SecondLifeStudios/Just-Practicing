#include <iostream>

int calculate(int first_number, int second_number);

int main()
{
	int first_number;
	int second_number; 

	std::cout << "Please give us your first number!" << std::endl;
	std::cin >> first_number;
	std::cout << "\nPlease give us your seocnd number!" << std::endl;
	std::cin >> second_number;

	calculate(first_number, second_number);

}


int calculate(int first_number, int second_number) {

	int result = first_number + second_number;
	std::cout << result << std::endl;

	return result;
}

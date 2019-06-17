#include <iostream>


void pass_by_value(int a);
void pass_by_reference(int* b);


int main()
{
    
	int v_value = 10;
	int r_value = 20;


	std::cout << "Value of 'v_value' before running function: " << v_value << std::endl;
	std::cout << "Value of 'r_value' before running function: " << r_value << std::endl;

	std::cout << std::endl;

	std::cout << "Size of 'v_value' before running function: " << sizeof(v_value) << std::endl;
	std::cout << "Size of 'r_value' before running function: " << sizeof(r_value) << std::endl;

	std::cout << std::endl;

	pass_by_value(v_value);
	pass_by_reference(&r_value);

	std::cout << "Value of 'v_value' after running function: " << v_value << std::endl;
	std::cout << "Value of 'r_value' after running function: " << r_value << std::endl;

	std::cout << std::endl;

	std::cout << "Size of 'v_value' after running function: " << sizeof(v_value) << std::endl;
	std::cout << "Size of 'r_value' after running function: " << sizeof(r_value) << std::endl;


}

void pass_by_value(int a) {
	a = 100;
}

void pass_by_reference(int* b) {
	 *b = 100;
}


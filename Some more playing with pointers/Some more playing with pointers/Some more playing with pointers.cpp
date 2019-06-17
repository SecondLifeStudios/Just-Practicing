#include <iostream>

int main()
{

	int a = 100;
	int* a_ptr = &a;

	std::cin >> a; 

	std::cout << a << std::endl;
	std::cout << "Size of a: " << sizeof(a) << std::endl;
	std::cout << "Memory Adress of a: " << a_ptr << std::endl;
	std::cout << "Size of memory adress of a: " << sizeof(a_ptr) << std::endl;
}


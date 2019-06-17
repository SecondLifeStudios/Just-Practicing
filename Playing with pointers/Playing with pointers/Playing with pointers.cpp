#include <iostream>

void pb_value(int x);
void pb_reference(int* x);

int main()
{
	int a = 10;
	int b = 10;

	pb_value(a);
	pb_reference(&b);

	std::cout << a << std::endl;
	std::cout << b << std::endl;
}

void pb_value(int x) {
	x = 100;
}

void pb_reference(int* x) {
	*x = 100;
}

#include <iostream>

int main()
{
	int x = 6;
	int* p = &x;

	std::cout << "Direccion memoria: " << &x;
	std::cout << "Valor de x " << &p;

	*p = 50;
	std::cout << "Nuevo valor de x: " << x << std::endl;

	return 0;
}
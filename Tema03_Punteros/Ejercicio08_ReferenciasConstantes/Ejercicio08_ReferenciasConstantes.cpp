#include <iostream>

int main()
{
	int x = 2;
	const int& r = x;

	std::cout << "Valor de x: " << r << std::endl;
	//r = 4; Esto da error

	x = 33;
	std::cout << "Nuevo valor de x: " << r << std::endl;
}
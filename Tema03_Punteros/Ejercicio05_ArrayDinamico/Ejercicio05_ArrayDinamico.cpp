#include <iostream>

int main()
{
	int* array = new int[5];
	for (int i = 0; i < 5; ++i)
	{
		array[i] = i;
	}
	std::cout << "Valores en el array dinamico: ";

	for (int i = 0; i < 5; ++i)
	{
		std::cout << array[i] << " ";
	}

	return 0;
}
#include <iostream>
#include <vector>

int main()
{
	//ARRAYS SIMPLES
	int numeros[10];
	std::cout << "Introduce 10 muneros: " << std::endl;
	for (int i = 0; i < 10; i++)
	{
		std::cin >> numeros[i];
	}

	std::cout << "Los números en orden inverso son:" << std::endl;
	for (int i = 9; i >= 0; --i) {
		std::cout << numeros[i] << std::endl;
	}

	//ARRAYS BIDIMENSIONALES
	int tabla[10][10];
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			tabla[i][j] = (i + 1) * (j + 1);
		}
	}

	std::cout << "Tabla de multiplicar 10x10:" << std::endl;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			std::cout << tabla[i][j] << "\t";
		}
		std::cout << std::endl;
	}

	//PUNTEROS Y ARRAYS
	int otroArray[5] = { 1,2,3,4,5 };
	int* puntero = otroArray;

	std::cout << "Elementos del array usando un puntero:" << std::endl;
	for (int i = 0; i < 5; i++)
	{
		std::cout << puntero + 1 << std::endl;
	}

	//VECTORES
	std::vector<int> vectorNumeros;
	int num;

	std::cout << "Introduce 5 numeros" << std::endl;
	for (int i = 0; i < 5; i++)
	{
		std::cin >> num;
		vectorNumeros.push_back(num);
	}

	std::cout << "Elementos del vector" << std::endl;
	for (int i = 0; i < vectorNumeros.size(); i++)
	{
		std::cout << vectorNumeros.at(i) << std::endl;
	}

	// Elimina el último elemento
	vectorNumeros.pop_back();

	std::cout << "Elementos del vector tras borrar el ultimo" << std::endl;
	for (int i = 0; i < vectorNumeros.size(); i++)
	{
		std::cout << vectorNumeros[i] << std::endl;
	}
}

#include <iostream>
#include <memory>  // Necesario para std::shared_ptr

void mostrarLista(std::shared_ptr<int[]> lista, int size)
{
	std::cout << "Mostrando lista desde una funci�n compartida: ";
	for (int i = 0; i < size; ++i)
	{
		std::cout << lista[i] << " ";
	}
	std::cout << std::endl;
}

//int main()
//{
//	int size;
//
//	std::cout << "Introduce el tama�o de la lista: ";
//	std::cin >> size;
//
//	//Creamos el puntero compartido
//	std::shared_ptr<int[]> list(new int[size]);
//
//	// Llenamos la lista con valores
//	for (int i = 0; i < size; ++i)
//	{
//		std::cout << "Introduce un n�mero para la posici�n " << i << ": ";
//		std::cin >> list[i];
//	}
//
//	// Mostramos la lista desde el main
//	// Como es un puntero compartido, demostramos que se puede hacer uso de �l en em mismo �mbito en el que se crea
//	std::cout << "Contenido de la lista desde main: ";
//	for (int i = 0; i < size; ++i)
//	{
//		std::cout << list[i] << " ";
//	}
//	std::cout << std::endl;
//
//	// Pasamos la lista a una funci�n compartida
//	// Se accede a la misma lista sin duplicarla ni crear nuevos punteros, se le pasa list, no puntero a list ni nada parecido
//
//	mostrarLista(list, size);
//}
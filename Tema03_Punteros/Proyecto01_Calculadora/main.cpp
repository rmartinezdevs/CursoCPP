#include <iostream>
#include "Calculadora.h"
int main()
{
	int n1, n2,result;
	char operacion;

	std::cout << "Calculadora Modular con Punteros\n";
	std::cout << "Introduce dos numeros: ";
	std::cin >> n1 >> n2;

	std::cout << "Elige una operacion (+, -, *, /): ";
	std::cin >> operacion;

	switch (operacion)
	{
	case '+':
		suma(n1, n2, &result);
		break;
	case '-':
		resta(n1, n2, &result);
		break;
	case '*':
		multiplicacion(n1, n2, &result);
		break;
	case '/':
		division(n1, n2, &result);
		break;
	default:
		std::cout << "Operación no válida." << std::endl;
		break;
	}
	std::cout << result << std::endl;
	return 0;
}
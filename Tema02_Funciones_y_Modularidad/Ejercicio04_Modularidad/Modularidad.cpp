#include <iostream>
#include "Operaciones.h"

int main()
{
    int num1, num2;

    std::cout << "Ingresa el primer n�mero: ";
    std::cin >> num1;
    std::cout << "Ingresa el segundo n�mero: ";
    std::cin >> num2;

    std::cout << "La suma es: " << sumar(num1, num2) << std::endl;
    std::cout << "La resta es: " << restar(num1, num2) << std::endl;

    return 0;
}
#include <iostream>
#include "Operaciones.h"

int main()
{
    int num1, num2;

    std::cout << "Ingresa el primer número: ";
    std::cin >> num1;
    std::cout << "Ingresa el segundo número: ";
    std::cin >> num2;

    std::cout << "La suma es: " << sumar(num1, num2) << std::endl;
    std::cout << "La resta es: " << restar(num1, num2) << std::endl;

    return 0;
}
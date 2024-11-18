#include <iostream>

bool esPar(int numero)
{
    return numero % 2 == 0;
}
int main()
{
    int numero;

    std::cout << "Ingresa un número: ";
    std::cin >> numero;

    if (esPar(numero))
    {
        std::cout << "El numero introducido es par\n";
    }
    else
    {
        std::cout << "El numero introducido es impar\n";
    }

    return 0;
}
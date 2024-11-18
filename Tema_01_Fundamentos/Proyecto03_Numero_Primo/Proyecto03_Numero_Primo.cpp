#include <iostream> // Biblioteca estándar para entrada y salida

int main()
{
    // Declaración de variables
    int numero;
    bool esPrimo = true;

    // Solicitar un número al usuario
    std::cout << "Ingresa un número entero: ";
    std::cin >> numero;

    // Verificar si el número es primo
    if (numero <= 1)
    {
        esPrimo = false; // Los números menores o iguales a 1 no son primos
    }
    else
    {
        for (int i = 2; i < numero; ++i)
        {
            if (numero % i == 0)
            {
                esPrimo = false;
                break; // Salir del bucle si se encuentra un divisor
            }
        }
    }

    // Mostrar el resultado
    if (esPrimo)
    {
        std::cout << "El número " << numero << " es primo." << std::endl;
    }
    else
    {
        std::cout << "El número " << numero << " no es primo." << std::endl;
    }

    return 0;
}

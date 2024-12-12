#include <iostream> // Biblioteca est�ndar para entrada y salida

int main()
{
    // Declaraci�n de variables
    int numero;
    bool esPrimo = true;

    // Solicitar un n�mero al usuario
    std::cout << "Ingresa un n�mero entero: ";
    std::cin >> numero;

    // Verificar si el n�mero es primo
    if (numero <= 1)
    {
        esPrimo = false; // Los n�meros menores o iguales a 1 no son primos
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
        std::cout << "El n�mero " << numero << " es primo." << std::endl;
    }
    else
    {
        std::cout << "El n�mero " << numero << " no es primo." << std::endl;
    }

    return 0;
}

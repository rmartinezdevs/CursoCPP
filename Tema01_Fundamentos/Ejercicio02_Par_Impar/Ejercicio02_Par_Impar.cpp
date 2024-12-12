#include <iostream> // Biblioteca estándar para entrada y salida

int main()
{
    // Declaración de una variable para almacenar el número ingresado por el usuario
    int numero;

    // Solicitar al usuario que ingrese un número
    std::cout << "Ingresa un número: ";
    std::cin >> numero;

    // Verificar si el número es divisible entre 2
    if (numero % 2 == 0)
    {
        // El número es par
        std::cout << "El número es par." << std::endl;
    }
    else
    {
        // El número es impar
        std::cout << "El número es impar." << std::endl;
    }

    // Retorna 0 para indicar que el programa terminó correctamente
    return 0;
}
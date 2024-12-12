#include <iostream> // Biblioteca est�ndar para entrada y salida

int main()
{
    // Declaraci�n de una variable para almacenar el n�mero ingresado por el usuario
    int numero;

    // Solicitar al usuario que ingrese un n�mero
    std::cout << "Ingresa un n�mero: ";
    std::cin >> numero;

    // Verificar si el n�mero es divisible entre 2
    if (numero % 2 == 0)
    {
        // El n�mero es par
        std::cout << "El n�mero es par." << std::endl;
    }
    else
    {
        // El n�mero es impar
        std::cout << "El n�mero es impar." << std::endl;
    }

    // Retorna 0 para indicar que el programa termin� correctamente
    return 0;
}
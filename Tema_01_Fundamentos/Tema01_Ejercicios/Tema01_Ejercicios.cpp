#include <iostream> // Biblioteca est�ndar para entrada y salida

int main()
{
    // Declaraci�n de variables para almacenar los n�meros ingresados por el usuario
    int num1, num2;

    // Solicitar al usuario que ingrese el primer n�mero
    std::cout << "Ingresa el primer n�mero: ";
    std::cin >> num1;

    // Solicitar al usuario que ingrese el segundo n�mero
    std::cout << "Ingresa el segundo n�mero: ";
    std::cin >> num2;

    // Comparar los n�meros y mostrar los resultados
    std::cout << "�El primer n�mero es mayor que el segundo? " << (num1 > num2) << std::endl;
    std::cout << "�El primer n�mero es menor que el segundo? " << (num1 < num2) << std::endl;
    std::cout << "�Son iguales? " << (num1 == num2) << std::endl;

    // Retorna 0 para indicar que el programa termin� correctamente
    return 0;
}
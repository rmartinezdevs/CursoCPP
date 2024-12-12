#include <iostream> // Biblioteca estándar para entrada y salida

int main()
{
    // Declaración de variables para almacenar los números ingresados por el usuario
    int num1, num2;

    // Solicitar al usuario que ingrese el primer número
    std::cout << "Ingresa el primer número: ";
    std::cin >> num1;

    // Solicitar al usuario que ingrese el segundo número
    std::cout << "Ingresa el segundo número: ";
    std::cin >> num2;

    // Comparar los números y mostrar los resultados
    std::cout << "¿El primer número es mayor que el segundo? " << (num1 > num2) << std::endl;
    std::cout << "¿El primer número es menor que el segundo? " << (num1 < num2) << std::endl;
    std::cout << "¿Son iguales? " << (num1 == num2) << std::endl;

    // Retorna 0 para indicar que el programa terminó correctamente
    return 0;
}
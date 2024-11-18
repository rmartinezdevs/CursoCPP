#include <iostream>
#include "Operaciones_p1.h"

int main()
{
    double num1, num2;
    char operacion;

    do
    {
        std::cout << "Calculadora b�sica\n";
        std::cout << "Introduce un numero: \n";
        std::cin >> num1;
        std::cout << "Introduce otro numero: \n";
        std::cin >> num2;

        std::cout << "Introduce la operaci�n (+, -, *, /, %, E para salir)\n";
        std::cin >> operacion;

        switch (operacion)
        {
        case '+':
            std::cout << "Resultado: " << sumar(num1, num2) << std::endl;
            break;
        case '-':
            std::cout << "Resultado: " << restar(num1, num2) << std::endl;
            break;
        case '*':
            std::cout << "Resultado: " << multiplicar(num1, num2) << std::endl;
            break;
        case '/':
            if (num2 == 0)
            {
                std::cout << "No se puede dividir entre 0" << std::endl;
            }
            else
            {
                std::cout << "Resultado: " << dividir(num1, num2) << std::endl;
            }
            break;
        case '%':
            if (static_cast<int>(num1) == num1 && static_cast<int>(num2) == num2)
            {
                std::cout << "Resultado: " << modulo(static_cast<int>(num1), static_cast<int>(num2)) << std::endl;
            }
            else
            {
                std::cout << "El operador de m�dulo solo se puede usar con n�meros enteros" << std::endl;
            }
            break;
        case 'E':
            std::cout << "Cerrando la aplicaci�n..." << std::endl;
            return 0;
        default:
            std::cout << "Operaci�n no v�lida" << std::endl;
            break;
        }
    } while (operacion != 'E');
}

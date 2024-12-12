#include <iostream>

int main()
{
    double num1, num2;
    char operacion;

    do {
        std::cout << "Calculadora básica\n";
        std::cout << "Introduce un numero: \n";
        std::cin >> num1;
        std::cout << "Introduce otro numero: \n";
        std::cin >> num2;

        std::cout << "Introduce la operación (+, -, *, /, %, E para salir)\n";
        std::cin >> operacion;

        switch (operacion)
        {
        case '+':
            std::cout << "Resultado: " << num1 + num2 << std::endl;
            break;
        case '-':
            std::cout << "Resultado: " << num1 - num2 << std::endl;
            break;
        case '*':
            std::cout << "Resultado: " << num1 * num2 << std::endl;
            break;
        case '/':
            if (num1 == 0 || num2 == 0)
            {
                std::cout << "No se puede dividir entre 0" << std::endl;
            }
            else
            {
                std::cout << "Resultado: " << num1 / num2 << std::endl;
            }
            break;
        case '%':
            if (static_cast<int>(num1) == num1 && static_cast<int>(num2) == num2)
            {
                std::cout << "Resultado: " << static_cast<int>(num1) % static_cast<int>(num2) << std::endl;
            }
            else
            {
                std::cout << "El operador de módulo solo se puede usar con números enteros" << std::endl;
            }
            break;
        case 'E':
            std::cout << "Cerrando la aplicación..." << std::endl;
            return 0;
        default:
            std::cout << "Operación no válida" << std::endl;
            break;
        }
    } while (operacion != 'E');
}
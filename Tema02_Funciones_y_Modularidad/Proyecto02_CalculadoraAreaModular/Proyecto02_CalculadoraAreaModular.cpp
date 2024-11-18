#include <iostream>
#include "Geometria.h"

int main()
{
    int opcion;
    do
    {
        std::cout << "\nCalculadora de �reas\n";
        std::cout << "1. Rect�ngulo\n";
        std::cout << "2. Tri�ngulo\n";
        std::cout << "3. C�rculo\n";
        std::cout << "4. Salir\n";
        std::cout << "Elige una opci�n: ";
        std::cin >> opcion;

        if (opcion == 1)
        {
            double largo, ancho;
            std::cout << "Ingresa el largo: ";
            std::cin >> largo;
            std::cout << "Ingresa el ancho: ";
            std::cin >> ancho;
            std::cout << "El �rea del rect�ngulo es: " << areaRectangulo(largo, ancho) << std::endl;
        }
        else if (opcion == 2)
        {
            double base, altura;
            std::cout << "Ingresa la base: ";
            std::cin >> base;
            std::cout << "Ingresa la altura: ";
            std::cin >> altura;
            std::cout << "El �rea del tri�ngulo es: " << areaTriangulo(base, altura) << std::endl;
        }
        else if (opcion == 3)
        {
            double radio;
            std::cout << "Ingresa el radio: ";
            std::cin >> radio;
            std::cout << "El �rea del c�rculo es: " << areaCircunferencia(radio) << std::endl;
        }
    } while (opcion != 4);

    return 0;
}

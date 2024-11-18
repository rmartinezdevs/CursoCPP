#include <iostream> // Biblioteca est�ndar para entrada y salida

int main()
{
    // Declaraci�n de variables
    int opcion;
    double valor, resultado;

    // Mostrar el men� de opciones
    std::cout << "Conversor de Unidades:\n";
    std::cout << "1. Metros a Pies\n";
    std::cout << "2. Celsius a Fahrenheit\n";
    std::cout << "Elige una opci�n: ";
    std::cin >> opcion;

    // Solicitar el valor a convertir
    std::cout << "Ingresa el valor a convertir: ";
    std::cin >> valor;

    // Realizar la conversi�n seg�n la opci�n seleccionada
    if (opcion == 1)
    {
        // 1 metro = 3.28084 pies
        resultado = valor * 3.28084;
        std::cout << "Resultado: " << resultado << " pies\n";
    }
    else if (opcion == 2)
    {
        // F�rmula: (Celsius * 9/5) + 32
        resultado = (valor * 9 / 5) + 32;
        std::cout << "Resultado: " << resultado << " Fahrenheit\n";
    }
    else
    {
        std::cout << "Opci�n no v�lida.\n";
    }

    return 0;
}

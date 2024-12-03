#include <iostream>

int main()
{
    int filas, columnas;

    std::cout << "Matriz Dinamica\n";
    std::cout << "Introduce el numero de filas: ";
    std::cin >> filas;
    std::cout << "Introduce el numero de columnas: ";
    std::cin >> columnas;

    //Se reserva el espacio en memoria
    int** matriz = new int*[filas];
    for (int i = 0; i < filas; ++i)
    {
        matriz[i] = new int[columnas];
    }

    //Se rellena el espacio reservado
    std::cout << "Introduce los valores de la matriz:\n";
    for (int i = 0; i < filas; ++i)
    {
        for (int j = 0; j < columnas; ++j)
        {
            std::cin >> matriz[i][j];
        }
    }
    
    //Imprimir matriz
    std::cout << "\nMatriz ingresada:\n";
    for (int i = 0; i < filas; ++i)
    {
        for (int j = 0; j < columnas; ++j)
        {
            std::cout << matriz[i][j] << " ";
        }
        std::cout << std::endl;
    }

    //Se libera la memoria, hay que hacerlo siempre que se trabaje con punteros
    for (int i = 0; i < filas; ++i)
    {
        delete[] matriz[i];
    }
}
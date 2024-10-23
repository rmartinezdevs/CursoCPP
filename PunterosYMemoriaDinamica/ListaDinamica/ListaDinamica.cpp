#include <iostream>

int main()
{
    //Ejemplo de gestión manual de la memoria
    int size;
    
    std::cout << "Introduce el tamaño de la lista: " << std::endl;
    std::cin >> size;

    //Asignamos memoria dinámica para la lista de enteros
    int* list = new int[size];

    //Rellenamos la lista con valores
    for (int i = 0; i < size; i++)
    {
        std::cout << "Introduce un numero para la posicion " << i << std::endl;
        std::cin >> list[i];
    }
    //Imprimimos la lista
    std::cout << "Contenido de la lista " << std::endl;
    for (int i = 0; i < size; i++)
    {
        std::cout << list[i] << std::endl;
    }

    //Liberamos la memoria - Esto se hace para evitar memory leaks
    //Siempre que se haya un new, hay que hacer un delete, por ley
    delete[] list;
}
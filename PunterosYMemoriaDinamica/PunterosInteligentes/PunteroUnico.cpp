#include <iostream>

//int main()
//{
//    //Ejemplo de gestión automática de memoria, no hay que hacer delete[]
//    //Al salir del ámbito, se libera la memoria
//    int size;
//
//    std::cout << "Introduce el tamaño de la lista: " << std::endl;
//    std::cin >> size;
//
//    //Creamos el puntero inteligente
//    std::unique_ptr<int[]> list(new int[size]);
//
//    //Rellenamos la lista con valores
//    for (int i = 0; i < size; i++)
//    {
//        std::cout << "Introduce un numero para la posicion " << i << std::endl;
//        std::cin >> list[i];
//    }
//    //Imprimimos la lista
//    std::cout << "Contenido de la lista " << std::endl;
//    for (int i = 0; i < size; i++)
//    {
//        std::cout << list[i] << std::endl;
//    }
//}
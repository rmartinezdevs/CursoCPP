#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> origen = {1, 5, 7};
    std::vector<int> destino;
    std::vector<int> numeros = { 5, 7, 1, 63, 4 };

    // Ejercicio 1 - Algoritmo Copia
    std::copy(origen.begin(), origen.end(), std::back_inserter(destino));

    std::cout << "Elementos en destino: ";
    for (int num : destino)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Ejercicio 2 - Iterador Constante
    for (std::vector<int>::const_iterator it = numeros.begin(); it != numeros.end(); ++it)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // Ejercio 3 - Iterador Reverso
    for (std::vector<int>::const_reverse_iterator it = numeros.rbegin(); it != numeros.rend(); ++it)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // Ejercicio 4 - Algoritmo Find_If
    auto it = std::find_if(numeros.begin(), numeros.end(), [](int n) { return n % 2 == 0; });
    auto it2 = std::find(numeros.begin(), numeros.end(), 4);
    if (it != numeros.end())
    {
        std::cout << "Primer par: " << *it << std::endl;
    }
    else
    {
        std::cout << "No se encontro ningún par" << std::endl;
    }
    std::cout << std::endl;

    //Ejercicio 5 - Inserter
    std::vector<int> origen_ej5 = { 1, 5, 7, 88, 99, 55 };
    std::vector<int> destino_ej5 = { 1, 2, 3, 4, 5 };

    std::copy(origen_ej5.begin(), origen_ej5.end(), std::inserter(destino_ej5, ++destino_ej5.begin())); //Instertamos en a partir de la segunda posición

    std::cout << "Elementos en destino: ";
    for (int n : destino_ej5)
    {
        std::cout << n << " ";
    }
    std::cout << std::endl;
    return 0;
}
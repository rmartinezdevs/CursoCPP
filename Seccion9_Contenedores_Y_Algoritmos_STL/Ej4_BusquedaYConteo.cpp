#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> datos = {5, 10, 15, 20, 10, 5, 30};

    int buscar = 10;
    auto it = std::find(datos.begin(), datos.end(), buscar);
    if (it != datos.end())
    {
        std::cout << "Elemento " << buscar << " encontrado en la posición " << std::distance(datos.begin(), it) << std::endl;
    }
    else
    {
        std::cout << "Elemento " << buscar << " no encontrado." << std::endl;
    }

    int contar = 5;
    int cantidad = std::count(datos.begin(), datos.end(), contar);
    std::cout << "El número " << contar << " aparece " << cantidad << " veces." << std::endl;

    return 0;
}
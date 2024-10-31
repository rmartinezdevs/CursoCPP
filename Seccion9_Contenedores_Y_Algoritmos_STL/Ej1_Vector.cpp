#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> numeros = {10, 20, 5, 15, 30};

    numeros.push_back(25);
    std::sort(numeros.begin() ,numeros.end());

    std::cout << "Contenido del vector ordenado: ";
    for (int num : numeros)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
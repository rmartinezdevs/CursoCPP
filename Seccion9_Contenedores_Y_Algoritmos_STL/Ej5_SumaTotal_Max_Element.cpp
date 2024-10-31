#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

int main() {
    std::vector<int> valores = {5, 10, 15, 20, 25};

    int suma = std::accumulate(valores.begin(), valores.end(), 0);
    std::cout << "Suma total de los elementos: " << suma << std::endl;

    auto maxIt = std::max_element(valores.begin(), valores.end());
    std::cout << "El valor máximo es: " << *maxIt << std::endl;

    return 0;
}
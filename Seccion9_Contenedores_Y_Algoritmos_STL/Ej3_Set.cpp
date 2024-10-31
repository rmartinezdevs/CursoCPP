#include <iostream>
#include <set>

int main()
{
    std::set<int> numeros = {10, 20, 5, 15, 20, 10};

    std::cout << "Conterido del set: ";
    for(std::set<int>::iterator it = numeros.begin(); it != numeros.end(); ++it)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}
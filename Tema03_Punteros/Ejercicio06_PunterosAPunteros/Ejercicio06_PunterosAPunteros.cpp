#include <iostream>

int main()
{
    int x = 5;
    int* p1 = &x;

    std::cout << "Dirección de x: " << &x << std::endl;
    std::cout << "Valor de x: " << *p1 << std::endl;

    *p1 = 10;

    std::cout << "Nuevo valor de x: " << x << std::endl;

    return 0;
}
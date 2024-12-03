#include <iostream>

int main()
{
    int x = 18;
    std::cout << "Valor de x= "<< x << "\n";

    int* puntero = &x;
    std::cout << "Valor del puntero= " << *puntero << "\n";
    std::cout << "Dirección del puntero= " << puntero << "\n";

    *puntero = 10;
    std::cout << "Valor del puntero modificado= " << *puntero << "\n";

    return 0;
}
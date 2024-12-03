#include <iostream>

int main()
{
    int* num = new int(42);
    std::cout << "Valor en memoria dinamica: " << *num << std::endl;

    delete num;
    num = nullptr;

    return 0;
}
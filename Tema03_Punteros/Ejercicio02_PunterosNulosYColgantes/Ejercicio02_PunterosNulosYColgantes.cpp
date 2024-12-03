#include <iostream>

int main()
{
    int* puntero = nullptr;

    if(puntero!= nullptr)
    {
        puntero = new int(20);
        delete puntero;
        puntero = nullptr;
    }
    return 0;
}
#include <iostream>

void intercambiar(int& num1, int& num2)
{
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

int main()
{
    int n1 = 5;
    int n2 = 8;

    std::cout << "N1 = "<< n1 <<"\n";
    std::cout << "N2 = " << n2 << "\n";

    intercambiar(n1, n2);

    std::cout << "N1 = " << n1 << "\n";
    std::cout << "N2 = " << n2 << "\n";

    return 0;
}
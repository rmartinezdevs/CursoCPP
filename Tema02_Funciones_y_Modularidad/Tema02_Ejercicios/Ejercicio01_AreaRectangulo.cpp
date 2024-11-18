#include <iostream>

double calcularArea(double largo, double ancho)
{
    return largo * ancho;
}
int main()
{
    double largo = 5;
    double ancho = 7;

    double area = calcularArea(largo, ancho);

    std::cout << "Area del rectángulo = " << area;

    return 0;
}
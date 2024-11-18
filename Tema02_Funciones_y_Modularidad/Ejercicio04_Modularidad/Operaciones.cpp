// Implementación de las operaciones aritméticas
#include <stdexcept>
#include "Operaciones.h"
double sumar(double a, double b) {
    return a + b;
}

double restar(double a, double b) {
    return a - b;
}

double multiplicar(double a, double b) {
    return a * b;
}

double dividir(double a, double b) {
    if (b != 0) {
        return a / b;
    }
    else {
        throw std::runtime_error("División entre cero no permitida");
    }
}

int sumar(int num1, int num2)
{
    return 0;
}

int restar(int num1, int num2)
{
    return 0;
}

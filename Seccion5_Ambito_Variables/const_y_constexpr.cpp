#include <iostream>

// Función const
const int obtenerValorConstante() {
    int x = 5;
    return x * 2;
}

// Función constexpr
constexpr int calcularValorConstante(int x) {
    return x * 3;
}

int main() {
    // Fallaría si usaramos esta variable x en la función calcularValorConstante porque al ser un constexpr, necesita un valor constante
    //int x = 1;

    const int valorEjecucion = obtenerValorConstante();  // Evaluado en tiempo de ejecución
    constexpr int valorCompilacion = calcularValorConstante(5);  // Evaluado en tiempo de compilación

    std::cout << "Valor calculado con const (tiempo de ejecución): " << valorEjecucion << "\n";
    std::cout << "Valor calculado con constexpr (tiempo de compilación): " << valorCompilacion << "\n";

    return 0;
}

#include <iostream>

// Variable global
int variableGlobal = 42;

void funcionLocal() {
    int variableLocal = 10;  // Solo accesible dentro de esta función
    std::cout << "Variable local: " << variableLocal << std::endl;
}

void funcionEstatica() {
    static int contador = 0;  // La variable se mantiene entre llamadas
    contador++;
    std::cout << "La función funcionEstatica ha sido llamada " << contador << " veces\n";
}

int main() {
    std::cout << "Variable global: " << variableGlobal << "\n";
    funcionLocal();
    funcionEstatica();
    funcionEstatica();
    return 0;
}

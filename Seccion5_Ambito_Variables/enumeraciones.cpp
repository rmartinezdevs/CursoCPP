#include <iostream>

enum Colores { Rojo, Verde, Azul };
enum class Direcciones { Norte, Sur, Este, Oeste };

int main() {
    Colores color = Rojo;
    Direcciones direccion = Direcciones::Oeste;

    std::cout << "Color (enum): " << color << "\n";  // Se puede imprimir directamente
    std::cout << "Dirección (enum class): " << static_cast<int>(direccion) << "\n";  // Necesita cast

    return 0;
}

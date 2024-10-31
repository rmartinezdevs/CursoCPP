#include <iostream>
#include <map>

int main()
{
    std::map<std::string, int> edades;

    edades["Rafa"] = 27;
    edades["Pedro"] = 50;
    edades ["Andres"] = 33;

    std::cout << "Contenido del map de edades: " << std::endl;
    // Usa const auto& siempre que sea posible para evitar copias innecesarias, especialmente en contenedores grandes.
    for (const auto& par : edades)
    {
        std::cout << par.first << " tiene " << par.second << " años." << std::endl;
    }
}
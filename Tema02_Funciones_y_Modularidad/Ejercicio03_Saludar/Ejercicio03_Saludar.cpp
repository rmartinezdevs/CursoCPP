#include <iostream>
#include <string>

void saludar(std::string nombre = "Invitado")
{
    std::cout << "Hola " << nombre;
}

int main()
{
    saludar();
    saludar("Rafa");

    return 0;
}
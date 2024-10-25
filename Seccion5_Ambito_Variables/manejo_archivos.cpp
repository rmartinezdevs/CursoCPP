#include <iostream>
#include <fstream>
#include <string>

void escribirArchivo()
{
    std::ofstream archivoSalida("salida.txt");
    if(archivoSalida.is_open())
    {
        archivoSalida << "Este es un ejemplo de escritura en un archivo.\n";
        archivoSalida.close();
    }
    else
    {
        std::cout << "No se puede escribir en el fichero";
    }
}

void leerArchivo()
{
    std::ifstream archivoEntrada("salida.txt");
    std::string linea;

    if(archivoEntrada.is_open())
    {
        while(getline(archivoEntrada, linea))
        {
            std::cout << linea << std::endl;
        }
        archivoEntrada.close();
    }
    else
    {
        std::cout << "No se puede leer el archivo" << std::endl;
    }
}

int main()
{
    escribirArchivo();
    leerArchivo();
    return 0;
}
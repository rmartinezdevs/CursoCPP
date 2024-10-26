#include <iostream>
#include <string>

class Persona
{
    private:
        std::string _nombre;
        int _edad;

    public:
        Persona(std::string nombre, int edad)
        {
            _nombre = nombre;
            _edad = edad;
        }

        // Esta es una forma de hacer el constructor
        // Persona(std::string nombre, int edad) : _nombre(nombre), _edad(edad){}

        std::string getNombre(){return _nombre;}
        int getEdad(){return _edad;}

        void setNombre(std::string nombre)
        {
            _nombre = nombre;
        }

        void setEdad (int edad)
        {
            if(edad <= 0)
            {
                _edad = edad;
            }
        }

        void verInformacion() const
        {
            std::cout << "Nombre: " << _nombre << " Edad: " << _edad << std::endl;
        }
};

int main()
{
    Persona persona1("Rafa", 27);
    persona1.verInformacion();

    persona1.setNombre("Pedro");
    persona1.setEdad(50);
    persona1.verInformacion();

    return 0;
}
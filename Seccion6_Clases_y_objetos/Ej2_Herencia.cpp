#include <iostream>
#include <string>

class Persona
{
protected:
    std::string _nombre;
    int _edad;

public:
    Persona(std::string n, int e) : _nombre(n), _edad(e) {}

    virtual void mostrarInformacion() const
    {
        std::cout << "Nombre: " << _nombre << ", Edad: " << _edad << std::endl;
    }
};

class Empleado : public Persona
{
    private:
        std::string _puesto;
    public:
        Empleado(std::string nombre, int edad, std::string puesto) : Persona(nombre, edad), _puesto(puesto){}

        void mostrarInformacion() const override
        {
            Persona::mostrarInformacion();
            std::cout << "Puesto: " << _puesto << std::endl;
        }
};

int main()
{
    Empleado empleado1("Rafa", 27, "Panadero");
    empleado1.mostrarInformacion();

    return 0;
}
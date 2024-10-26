#include <iostream>
#include <string>
#include <vector>

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
    Empleado(std::string n, int e, std::string p) : Persona(n, e), _puesto(p) {}

    void mostrarInformacion() const override
    {
        Persona::mostrarInformacion();
        std::cout << "Puesto: " << _puesto << std::endl;
    }
};

class Estudiante : public Persona
{
    private:
        std::string _grado;

    public:
        Estudiante(std::string nombre, int edad, std::string grado) : Persona (nombre, edad), _grado(grado){}

        void mostrarInformacion() const override
        {
            Persona::mostrarInformacion();
            std::cout << "Grado: " << _grado << std::endl;
        }
};

int main()
{
    // El vector es de tipo puntero a Persona porque así me permite almacenar
    // objetos de una jerarquía de clases. Necesito gestionar la memoria manualmente

    std::vector<Persona*> personas;

    personas.push_back(new Empleado("Rafael", 27, "Panadero"));
    personas.push_back(new Estudiante("Pedro", 50, "Cocina"));

    for (Persona* persona : personas)
    {
        persona->mostrarInformacion();
        std::cout << std::endl;
    }

    // Libero manualmente la memoria
    for (Persona* persona : personas)
    {
        delete persona;
    }
}
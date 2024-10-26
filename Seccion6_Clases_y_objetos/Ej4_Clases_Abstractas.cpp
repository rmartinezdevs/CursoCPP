#include <iostream>
#include <string>

class Vehiculo
{
    public:
        virtual void mover() const = 0; //Metodo virtual puro
};

class Coche: public Vehiculo
{
    public:
        void mover() const override
        {
            std::cout << "El coche se mueve por la carretera" << std::endl;
        }
};

class Bici: public Vehiculo
{
    void mover() const override
        {
            std::cout << "La bici se mueve por el carril bici" << std::endl;
        }
};

int main()
{
    Coche coche;
    Bici bici;

    Vehiculo* vehiculo1 = &coche;
    Vehiculo* vehiculo2 = &bici;

    vehiculo1->mover();
    vehiculo2->mover();

    return 0;
}
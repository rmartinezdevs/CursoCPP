#include <iostream>

// Ejercicio 1
template <typename T>
T suma(T a, T b)
{
    return a + b;
}

// Ejercicio 2
template <typename T>
class Caja
{
private:
    T _contenido;
public:
    Caja(T contenido) : _contenido(contenido) {}

    T getContenido() const
    {
        return _contenido;
    }
};

//Ejercicio 3
template<typename T, typename U>
class Par
{
private:
    T _primero;
    U _segundo;
public:
    Par(T primero, U segundo) : _primero(primero), _segundo(segundo){}

    T getPrimero() const
    {
        return _primero;
    }

    U getSegundo() const
    {
        return _segundo;
    }
};

//Ejercicio 5
template<>
class Caja<int>
{
private:
   int _contenido;
public:
    Caja(int contenido):_contenido(contenido){}

    int duplicarContenido() const
    {
        return _contenido * 2;
    }

};

// Ejercicio 6
template<typename T, int SIZE>
class Array
{
private:
    T _datos[SIZE];
public:
    void setDato(int index, T valor)
    {
        if (index >= 0 && index < SIZE)
        {
            _datos[index] = valor;
        }
    }

    T getDato(int index) const
    {
        if (index >= 0 && index < SIZE)
        {
            return _datos[index];
        }
        //Devuelvo un valor por defecto si el índice es inválido
        return T();
    }
};

int main()
{
    // Ejercicio 1
    int resultadoInt = suma(2, 6);
    double resultadoDouble = suma(1.4, 6.5);

    std::cout << "Resultado suma int: " << resultadoInt << std::endl;
    std::cout << "Resultado suma double: " << resultadoDouble << std::endl;

    //Ejercicio 2
    Caja<int> cajaEntero(42);
    Caja<std::string> cajaString("Hola");

    // Se comenta la siguiente línea porque al especificar la clase caja para entero no reconoce el método getContenido cuando es un entero
    // std::cout << "Contenido caja entero: " << cajaEntero.getContenido() << std::endl;
    std::cout << "Contenido caja string: " << cajaString.getContenido() << std::endl;

    //Ejercicio 3
    Par<int, double> par(10, 5.5);
    Par<std::string, int> parTextoNumero("Edad", 27);

    std::cout << "Par de int y double: " << par.getPrimero() << ", " << par.getSegundo() << std::endl;
    std::cout << "Par de string y int: " << parTextoNumero.getPrimero() << ", " << parTextoNumero.getSegundo() << std::endl;

    //Ejercicio 4
    double num1 = 5.56;
    double num2 = 7.7;

    int resultado = suma<int>(num1, num2);
    std::cout << "Resultado de la suma como entero: " << resultado << std::endl;

    //Ejercicio 5 
    Caja<int> cajaEntero(10);
    Caja<double> cajaDouble(5.5);

    std::cout << "Contenido de cajaEntero: " << cajaEntero.duplicarContenido() << std::endl; // Muestra 20
    std::cout << "Contenido de cajaDouble: " << cajaDouble.getContenido() << std::endl; // Muestra 5.5

    //Ejercicio 6
    Array<int, 5> arrayEnteros;
    arrayEnteros.setDato(0, 10);
    arrayEnteros.setDato(1, 20);

    std::cout << "Valor en índice 0: " << arrayEnteros.getDato(0) << std::endl;
    std::cout << "Valor en índice 1: " << arrayEnteros.getDato(1) << std::endl;

    return 0;
}
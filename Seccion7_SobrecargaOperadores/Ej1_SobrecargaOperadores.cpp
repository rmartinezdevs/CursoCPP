#include <iostream>

class Vector2D
{

private:
    float _x;
    float _y;

public:
    Vector2D(float x = 0, float y = 0) : _x(x), _y(y) {}

    // Sobrecarga del operador +
    Vector2D operator+ (const Vector2D& otro) const
    {
        return Vector2D(_x + otro._x, _y + otro._y);
    }

    // Sobrecarga del operador -
    Vector2D operator- (const Vector2D& otro) const
    {
        return Vector2D(_x - otro._x, _y - otro._y);
    }

    // Sobrecarga del operador * para multiplicación por un escalar
    Vector2D operator* (float escalar) const
    {
        return Vector2D(_x * escalar, _y * escalar);
    }

    // Sobrecarga del operador == para comparación
    bool operator== (const Vector2D& otro) const
    {
        return (_x == otro._x) && (_y == otro._y);
    }

    // Sobrecarga del operador de salida <<
    friend std::ostream& operator<<(std::ostream& os, const Vector2D& vec)
    {
        os << "(" << vec._x << ", " << vec._y << ")";
        return os;
    }
};

int main()
{
    Vector2D v1(3.5, 2.1);
    Vector2D v2(1.5, 3.9);

    Vector2D suma = v1 + v2;
    std::cout << "Suma: " << suma << std::endl;

    Vector2D resta = v1 - v2;
    std::cout << "Resta: " << resta << std::endl;

    Vector2D productoEscalar = v1 * 2.0;
    std::cout << "Producto escalar: " << productoEscalar << std::endl;

    bool sonIguales = (v1 == v2);
    std::cout << "¿Son iguales v1 y v2? " << (sonIguales ? "Sí" : "No") << std::endl;

    return 0;
}

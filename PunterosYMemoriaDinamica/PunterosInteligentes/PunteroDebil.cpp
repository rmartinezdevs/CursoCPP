#include <iostream>
#include <memory>

//Cada nodo tiene un nombre y un puntero que permite observar a otro Nodo

class Nodo
{
public:
    std::string nombre;
    // Usamos el puntero débil para almacenar una referencia debil sin aumentar el contador de referencias del objeto apuntado
    std::weak_ptr<Nodo> amego;  // Observa al amigo sin mantenerlo vivo, es solo un obvervador

    Nodo(std::string nom) : nombre(nom)
    {
        std::cout << nombre << " ha sido creado." << std::endl;
    }

    ~Nodo()
    {
        std::cout << nombre << " ha sido destruido." << std::endl;
    }
};

int main()
{
    // Creamos los dos nodos usando punteros compartidos para que ambos sean gestionados automáticamente
    // Sus contadores de referencias aseguran la gestión automática de la memoria

    std::shared_ptr<Nodo> nodo1 = std::make_shared<Nodo>("Nodo 1");
    std::shared_ptr<Nodo> nodo2 = std::make_shared<Nodo>("Nodo 2");

    // El nodo 1 observa al nodo 2 mediante un puntero débil
    // Este puntero no inrementa el contador de referencias de nodo 2
    // Esto significa que nodo2 puede ser destruido incluso si nodo1 sigue observandolo
    nodo1->amego = nodo2;  // Nodo 1 observa a Nodo 2

    // Verificamos si el amigo de Nodo 1 sigue existiendo
    // Si el puntero aún existe, devolvemos un puntero compartido válido, si no, nulo
    // Se usa el lock para acceder de manera segura, ya que primero hay que convertirlo de debil a compartido para ver si existe
    if (auto ptr = nodo1->amego.lock())
    {
        std::cout << nodo1->nombre << " tiene a " << ptr->nombre << " como amigo." << std::endl;
    }
    else
    {
        std::cout << nodo1->nombre << " no tiene amigo." << std::endl;
    }

    // Eliminamos la referencia al segundo nodo, provocando que el contador de referencias llegue a 0 y sea destruido.
    nodo2.reset();  // Se destruye Nodo 2

    // Aquí volvemos a usar el lock para ver si nodo2 sigue vivo, pero devolvemos null, por lo que nodo1 ya no tiene amigo
    if (auto ptr = nodo1->amego.lock()) {
        std::cout << nodo1->nombre << " tiene a " << ptr->nombre << " como amigo." << std::endl;
    }
    else {
        std::cout << nodo1->nombre << " ya no tiene amigo." << std::endl;
    }

    return 0;
}
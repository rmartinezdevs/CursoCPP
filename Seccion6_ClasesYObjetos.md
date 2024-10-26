# Sección 6: Clases y Objetos en C++

## 1. ¿Qué son las clases y los objetos?

- **Clases**: Son plantillas o moldes para crear objetos. Una clase en C++ define tanto los datos (atributos) como los comportamientos (métodos) que un objeto tendrá. En Programación Orientada a Objetos (POO), las clases modelan entidades del mundo real en el programa.
    - **Atributos**: Representan las características o el estado de la clase.
    - **Métodos**: Son funciones definidas dentro de una clase que actúan sobre los atributos o realizan tareas específicas.

    ```
    class NombreClase {
    public:
        // Atributos y métodos públicos
    private:
        // Atributos y métodos privados
    };
    ```

- **Objetos**: Un objeto es una instancia de una clase y representa una entidad real con datos específicos y comportamiento. Cada objeto puede tener valores diferentes en sus atributos, incluso si provienen de la misma clase.

## 2. Definición de una clase en C++

```
class Persona {
public:
    std::string nombre;
    int edad;

    void mostrarInformacion() {
        std::cout << "Nombre: " << nombre << ", Edad: " << edad << std::endl;
    }
};
```

- **Modificadores de acceso**: Los miembros de una clase pueden ser `public`, `private` y `protected`.
    - `public`: Accesible desde cualquier parte del código.
    - `private`: Solo accesible dentro de la clase.
    - `protected`: Accesible dentro de la clase y sus derivadas, pero no desde el exterior.

```
Persona persona1;
persona1.nombre = "Alice";
persona1.edad = 30;
persona1.mostrarInformacion();  // Usa operador punto para acceder al método
```

## 3. Constructores y destructores

- **Constructor**: Se llama automáticamente al crear un objeto. Su función es inicializar los atributos.

    ```
    class Persona {
    public:
        std::string nombre;
        int edad;

        Persona(std::string n, int e) : nombre(n), edad(e) {
            std::cout << "Constructor llamado para " << nombre << std::endl;
        }
    };
    ```

    **Tipos de constructores**:
    - **Constructor predeterminado**: Un constructor sin parámetros que inicializa atributos con valores predeterminados.
    - **Constructor parametrizado**: Constructor con parámetros, permite inicializar los atributos con valores específicos al crear el objeto.
    - **Constructor de copia**: Inicializa un objeto copiando los valores de otro. Útil en situaciones donde se requiere una copia completa.

    **Ejemplo de constructor de copia**:
    ```
    Persona(const Persona& otraPersona) {
        nombre = otraPersona.nombre;
        edad = otraPersona.edad;
    }
    ```

- **Destructor**: Se llama automáticamente cuando el objeto sale de su ámbito, liberando recursos si es necesario.

    ```
    ~Persona() {
        std::cout << "Destructor llamado para " << nombre << std::endl;
    }
    ```

## 4. Encapsulación y métodos `getter` y `setter`

La **encapsulación** protege los datos de manipulación indebida y mantiene la integridad del objeto. Se usa `private` en los atributos y se accede a ellos mediante métodos `getter` y `setter`.

```
class Persona {
private:
    std::string nombre;
    int edad;

public:
    Persona(std::string n, int e) : nombre(n), edad(e) {}

    std::string getNombre() const { return nombre; }
    void setNombre(const std::string &n) { nombre = n; }

    int getEdad() const { return edad; }
    void setEdad(int e) { if (e >= 0) edad = e; }
};
```

**Ventajas de la encapsulación**:
1. **Protección de datos**: Restringe el acceso directo a los datos, manteniendo la coherencia del objeto.
2. **Control de validación**: Facilita la validación de datos a través de los `setter`, garantizando que solo se asignen valores válidos.

## 5. Herencia en C++

La **herencia** permite que una clase derive atributos y métodos de otra, lo que facilita la reutilización de código.

```
class Persona {
public:
    std::string nombre;
    int edad;

    Persona(std::string n, int e) : nombre(n), edad(e) {}
    void mostrarInformacion() {
        std::cout << "Nombre: " << nombre << ", Edad: " << edad << std::endl;
    }
};

class Empleado : public Persona {
public:
    std::string puesto;

    Empleado(std::string n, int e, std::string p) : Persona(n, e), puesto(p) {}

    void mostrarInformacion() override {
        Persona::mostrarInformacion();
        std::cout << "Puesto: " << puesto << std::endl;
    }
};
```

**Tipos de herencia**:
- **Herencia pública**: Los miembros `public` y `protected` de la clase base se mantienen con el mismo acceso en la clase derivada.
- **Herencia protegida**: Los miembros `public` de la clase base pasan a ser `protected` en la clase derivada.
- **Herencia privada**: Todos los miembros de la clase base pasan a ser `private` en la clase derivada.

## 6. Polimorfismo en C++

El **polimorfismo** permite que una clase derivada tenga diferentes implementaciones de un mismo método de la clase base.

#### Funciones virtuales y `override`

El `virtual` permite que las clases derivadas sobrescriban el método de la clase base.

```
class Persona {
public:
    virtual void mostrarRol() {
        std::cout << "Soy una persona." << std::endl;
    }
};

class Empleado : public Persona {
public:
    void mostrarRol() override {
        std::cout << "Soy un empleado." << std::endl;
    }
};

Persona* p = new Empleado();
p->mostrarRol(); // Llama a `mostrarRol` de `Empleado`
```

**Polimorfismo en tiempo de ejecución vs. tiempo de compilación**:
- **Polimorfismo en tiempo de ejecución**: Se produce a través de funciones virtuales. El tipo de objeto al que apunta el puntero se determina en tiempo de ejecución.
- **Polimorfismo en tiempo de compilación**: Se produce mediante la sobrecarga de funciones y la sobrecarga de operadores, donde el compilador elige qué función llamar.

## 7. Clases abstractas e interfaces

Una **clase abstracta** contiene al menos un método `virtual` puro (definido con `= 0`). No se puede instanciar directamente y funciona como plantilla para otras clases.

```
class SerVivo {
public:
    virtual void respirar() = 0;
};
```

Las clases que heredan de `SerVivo` deben implementar el método `respirar`.

**Ventajas de las clases abstractas**:
- **Definen una interfaz común**: Obligan a las clases derivadas a implementar métodos específicos, proporcionando una estructura y un contrato para el diseño de la clase.
- **Facilitan el polimorfismo**: Las clases abstractas permiten tratar diferentes tipos de objetos de manera uniforme.

## Buenas Prácticas

1. **Inicializar atributos en el constructor**: Usa listas de inicialización para una asignación más eficiente de memoria y mayor claridad.
  
2. **Encapsular siempre los atributos**: Evita atributos públicos y usa `getter` y `setter` para mantener la integridad del objeto.

3. **Usar herencia solo cuando sea lógico**: Si la clase derivada no es un tipo de la clase base, considera usar **composición** en lugar de herencia.

4. **Sobrescribir métodos con `override`**: El uso de `override` ayuda al compilador a detectar errores si el método en la clase base cambia.

5. **Liberar recursos en destructores**: Si una clase reserva memoria u otros recursos, libéralos en el destructor para evitar fugas de memoria.

6. **Mantener las clases enfocadas**: Aplica el principio de responsabilidad única, manteniendo las clases enfocadas en una sola tarea para facilitar el mantenimiento y la reutilización.

7. **Uso prudente de funciones virtuales**: Definir solo los métodos que realmente necesiten polimorfismo como `virtual`, ya que los métodos virtuales tienen una ligera sobrecarga de rendimiento.

8. **Preferir la herencia pública para relaciones "es un"**: Si la relación entre dos clases no puede describirse como "es un", la herencia puede no ser la mejor opción. Evalúa si la composición (contener objetos de otra clase) podría ser una mejor alternativa.

---

**Fin de la Sección 6**

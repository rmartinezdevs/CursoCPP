
# Contenedores y Algoritmos en la STL

La **Standard Template Library** (STL) es un componente central de C++ que contiene plantillas de datos y herramientas optimizadas para operaciones comunes, facilitando el desarrollo y mantenimiento de código. La STL incluye tres grandes categorías de componentes: **contenedores**, **iteradores** y **algoritmos**.

## 1. Contenedores en la STL

Los contenedores son estructuras de datos que permiten almacenar colecciones de elementos. En C++, cada contenedor tiene propiedades específicas que lo hacen adecuado para ciertos tipos de tareas.

### 1.1 Contenedores Secuenciales

Los contenedores secuenciales mantienen los elementos en el orden en el que fueron insertados. Entre los más utilizados están:

- **Vector (`std::vector`)**: Similar a un array dinámico. Permite acceder a cualquier elemento en tiempo constante \(O(1)\) y redimensionarse automáticamente. Se usa cuando se necesitan accesos rápidos y no se requiere inserción en posiciones específicas.
  
```[code]
#include <iostream>
#include <vector>

int main() {
    std::vector<int> numeros = {1, 2, 3, 4, 5};
    numeros.push_back(6);

    for (int num : numeros) {
        std::cout << num << " ";
    }
    return 0;
}
```

- **List (`std::list`)**: Lista doblemente enlazada. Ofrece una excelente eficiencia en la inserción y eliminación de elementos \(O(1)\) en cualquier posición. Ideal para operaciones en ambos extremos o en ubicaciones intermedias.

- **Deque (`std::deque`)**: Similar a `vector`, pero permite inserciones y eliminaciones rápidas en ambos extremos. Utilizado cuando necesitamos trabajar de forma eficiente en ambos extremos de la colección.

### 1.2 Contenedores Asociativos

Los contenedores asociativos organizan los datos internamente para permitir búsquedas rápidas y accesos eficientes. Su implementación subyacente se basa en árboles de búsqueda binarios o tablas hash.

- **Set (`std::set`)**: Conjunto de elementos únicos, ordenados automáticamente en base al tipo almacenado. Permite búsquedas en tiempo logarítmico \(O(\log n)\) y es útil para garantizar unicidad.

- **Map (`std::map`)**: Almacena pares clave-valor, permitiendo asociar una clave a un valor específico. Similar a `set`, los elementos están ordenados y las búsquedas se realizan en tiempo logarítmico.

```[code]
#include <iostream>
#include <map>

int main() {
    std::map<std::string, int> edades;
    edades["Ana"] = 25;
    edades["Pedro"] = 30;

    for (const auto& par : edades) {
        std::cout << par.first << " tiene " << par.second << " años." << std::endl;
    }
    return 0;
}
```

### 1.3 Contenedores Tipo Pilas y Colas

Estos contenedores modelan estructuras LIFO y FIFO, y permiten realizar operaciones de inserción y extracción en uno o ambos extremos.

- **Stack (`std::stack`)**: Estructura de datos LIFO (Last In, First Out). Solo permite insertar y eliminar en el tope.
  
- **Queue (`std::queue`)**: Estructura FIFO (First In, First Out), donde los elementos se insertan en el final y se extraen del frente.
  
- **Priority Queue (`std::priority_queue`)**: Cola en la que los elementos salen según una prioridad, no en el orden de llegada.

---

## 2. Iteradores en la STL

Los **iteradores** son objetos que permiten recorrer contenedores y manipular los elementos almacenados en ellos. Cada contenedor tiene un tipo de iterador asociado, que se comporta de manera similar a un puntero.

### Tipos de Iteradores

1. **Iterador Forward**: Permite recorrer el contenedor en un solo sentido (de inicio a fin).
2. **Iterador Bidireccional**: Permite recorrer el contenedor en ambos sentidos (de inicio a fin y viceversa).
3. **Iterador Random Access**: Permite acceder directamente a cualquier posición dentro del contenedor. Es soportado por contenedores como `vector` y `deque`.

### Ejemplo: Uso de Iteradores con `vector`

Los iteradores se pueden declarar usando la sintaxis `typename Contenedor::iterator`.

```[code]
#include <iostream>
#include <vector>

int main() {
    std::vector<int> numeros = {1, 2, 3, 4, 5};
    std::vector<int>::iterator it;
    
    for (it = numeros.begin(); it != numeros.end(); ++it) {
        std::cout << *it << " ";
    }
    return 0;
}
```

---

## 3. Algoritmos en la STL

Los **algoritmos** de la STL son funciones genéricas que permiten manipular y procesar elementos dentro de contenedores de manera optimizada. C++ ofrece una amplia gama de algoritmos en `<algorithm>`, y algunos de los más útiles incluyen:

1. **Algoritmos de Modificación**:
   - **`std::sort`**: Ordena los elementos de un contenedor.
   - **`std::reverse`**: Invierte el orden de los elementos.
   - **`std::copy`**: Copia elementos de un contenedor a otro.
  
```[code]
#include <algorithm>
#include <vector>
#include <iostream>

int main() {
    std::vector<int> datos = {4, 2, 5, 1, 3};
    std::sort(datos.begin(), datos.end()); // Ordena de menor a mayor

    for (int num : datos) {
        std::cout << num << " ";
    }
    return 0;
}
```

2. **Algoritmos de Búsqueda**:
   - **`std::find`**: Busca un valor en un contenedor y devuelve un iterador a la posición o `end()` si no lo encuentra.
   - **`std::binary_search`**: Realiza una búsqueda binaria en un contenedor ordenado.

3. **Algoritmos Numéricos**:
   - **`std::accumulate`**: Suma total de los elementos en un contenedor.
   - **`std::count`**: Cuenta las ocurrencias de un valor.

```[code]
#include <numeric>
#include <vector>
#include <iostream>

int main() {
    std::vector<int> valores = {1, 2, 3, 4, 5};
    int suma = std::accumulate(valores.begin(), valores.end(), 0);
    std::cout << "Suma total: " << suma << std::endl;

    return 0;
}
```

---

## 4. Buenas Prácticas y Consideraciones con la STL

1. **Elegir el Contenedor Correcto**: El uso correcto del contenedor puede afectar el rendimiento. Por ejemplo, usa `vector` para accesos rápidos, `list` para inserciones/borrados frecuentes, y `map` para asociaciones clave-valor.

2. **Utilizar Iteradores Inteligentemente**: Al recorrer un contenedor, evita modificar su estructura (agregar o eliminar elementos), a menos que uses un `std::list` que permite operaciones seguras de modificación durante la iteración.

3. **Aprovechar los Algoritmos Existentes**: La STL ofrece algoritmos eficientes para tareas comunes, y usar estos en lugar de implementar tu propia lógica mejora el rendimiento y la legibilidad del código.

4. **Evitar Copias Innecesarias de Elementos**: Usa `std::move` en lugar de `std::copy` para mover elementos cuando ya no los necesites en su ubicación original, ya que esto ahorra tiempo al no duplicar datos.

---

## 5. Recomendaciones de Contenedores Según la Necesidad

- **Si necesitas acceso rápido y frecuente a los elementos**: Usa `std::vector`.
- **Si realizas inserciones y eliminaciones frecuentes al inicio o al final**: Usa `std::deque`.
- **Para operaciones de inserción/eliminación en cualquier punto del contenedor**: Usa `std::list`.
- **Para almacenar valores únicos y acceder rápido sin importar el orden**: Usa `std::set`.
- **Para pares clave-valor con acceso rápido mediante una clave**: Usa `std::map`.


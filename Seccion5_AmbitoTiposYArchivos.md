# Sección 5: Ámbito de Variables y Tipos Definidos por el Usuario

## 1. Ámbito de Variables en C++

El ámbito de una variable determina en qué parte del programa es accesible. En C++, el ámbito puede ser:

- **Variable Local**: Declarada dentro de una función o bloque. Solo es accesible dentro de dicho bloque y se destruye cuando el bloque finaliza.

```
void funcion() {
    int variableLocal = 10;
    std::cout << variableLocal << std::endl;
}
```

- **Variable Global**: Declarada fuera de cualquier función o clase, es accesible en todo el programa. Su valor persiste mientras el programa esté en ejecución.

```
int variableGlobal = 42;

void funcion() {
    std::cout << variableGlobal << std::endl;
}
```

- **Variable Estática (`static`)**: Una variable estática dentro de una función retiene su valor entre múltiples llamadas. Esto es útil cuando necesitas que una función recuerde el estado entre ejecuciones.

```
void contarLlamadas() {
    static int contador = 0;
    contador++;
    std::cout << "Función llamada " << contador << " veces\n";
}
```

## 2. `const` y `constexpr`

- **`const`**: Declara una variable cuyo valor no puede cambiar después de ser inicializada. El valor puede ser determinado en tiempo de compilación o en tiempo de ejecución.

```
const int valorConstante = 10;
```

- **`constexpr`**: Su valor debe ser determinable en tiempo de compilación. Esto permite optimización adicional, ya que el valor queda fijo en el código compilado.

```
constexpr int valorCompilacion = 20;
```

### Diferencias entre `const` y `constexpr`
- `const` permite definir constantes en tiempo de ejecución o compilación, mientras que `constexpr` solo permite valores conocidos en tiempo de compilación.
- Ejemplo:

```
const int valorEjecucion = obtenerValor();  // Se evalúa en tiempo de ejecución
constexpr int valorCompilacion = 5 * 3;    // Se evalúa en tiempo de compilación
```

## 3. Enumeraciones (`enum` y `enum class`)

Las enumeraciones en C++ permiten crear conjuntos de valores constantes para facilitar la lectura y mantenimiento del código.

- **`enum`**: Enumeración tradicional donde los valores se pueden usar como enteros.

```
enum Colores { Rojo, Verde, Azul };
Colores color = Rojo;
```

- **`enum class`**: Enumeración fuertemente tipada, que no se mezcla con otros tipos. Requiere conversión explícita para usarse como entero.

```
enum class Direcciones { Norte, Sur, Este, Oeste };
Direcciones direccion = Direcciones::Norte;
```

### Ventajas de `enum class`
- Evita colisiones de nombres.
- Requiere conversión explícita, lo que ayuda a evitar errores.

## 4. Entrada y salida de archivos (`fstream`)

Para trabajar con archivos en C++, se usa la biblioteca `<fstream>`, que ofrece `ofstream` para escribir archivos y `ifstream` para leer archivos.

### Escritura en archivos (`ofstream`)

```
#include <fstream>
#include <iostream>

void escribirArchivo() {
    std::ofstream archivoSalida("archivo.txt");
    if (archivoSalida.is_open()) {
        archivoSalida << "Escribiendo en un archivo desde C++.\n";
        archivoSalida.close();
    }
}
```

### Lectura de archivos (`ifstream`)

```
#include <fstream>
#include <iostream>
#include <string>

void leerArchivo() {
    std::ifstream archivoEntrada("archivo.txt");
    std::string linea;
    if (archivoEntrada.is_open()) {
        while (getline(archivoEntrada, linea)) {
            std::cout << linea << "\n";
        }
        archivoEntrada.close();
    }
}
```

### Modos de apertura de archivos
- **`ios::in`**: Modo de lectura.
- **`ios::out`**: Modo de escritura (sobrescribe el contenido).
- **`ios::app`**: Modo de anexado, para añadir datos al final sin sobrescribir.

---

## Buenas Prácticas

- **Evita el uso excesivo de variables globales**: Pueden causar efectos inesperados, ya que cualquier función puede modificar su valor. Usa variables locales siempre que sea posible para reducir errores y mejorar el encapsulamiento.
  
- **Utiliza `const` y `constexpr` cuando sea posible**: Esto permite al compilador optimizar el programa y deja claro que el valor no debe cambiar, ayudando a prevenir errores.

- **Prefiere `enum class` sobre `enum` tradicional**: `enum class` es más seguro ya que requiere conversión explícita y evita conflictos de nombres.

- **Cierra los archivos al terminar**: Aunque el archivo se cierra automáticamente al finalizar el programa, es una buena práctica cerrarlo explícitamente después de cada uso con `.close()`.

- **Utiliza `static` para mantener el estado entre llamadas**: Cuando necesites que una función recuerde su estado, `static` es útil y evita el uso de variables globales.

---

**Fin de la Sección 5**

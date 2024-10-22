# CursoC++

Este es el repositorio donde iré documentando el curso completo de C++ que estoy desarrollando. Aquí iré agregando los resúmenes de cada sección a medida que avance en el curso.

## **Sección 1: Fundamentos de C++**

### **Estructura básica de un programa en C++**
- Un programa en C++ siempre comienza con la función `main()`, que es el punto de entrada.
- Para la entrada y salida de datos, se utilizan `cin` y `cout`, que son parte de la biblioteca estándar `<iostream>`.
- Ejemplo básico de programa:

    ```cpp
    #include <iostream>

    int main() {
        std::cout << "¡Hola, Mundo!" << std::endl;
        return 0;
    }
    ```

### **Tipos de datos y variables**
- En C++, los tipos de datos básicos incluyen:
  - **`int`**: Enteros.
  - **`float`** y **`double`**: Números con decimales.
  - **`char`**: Caracteres.
  - **`bool`**: Valores booleanos (verdadero o falso).
  
- Ejemplo de declaración de variables:

    ```cpp
    int numero = 42;
    double decimal = 3.14;
    char letra = 'A';
    bool esVerdad = true;
    ```

### **Operadores**
- Operadores aritméticos: `+`, `-`, `*`, `/`, `%` (solo para enteros).
- Operadores lógicos: `&&`, `||`, `!`.
- Operadores de comparación: `==`, `!=`, `>`, `<`, `>=`, `<=`.

Ejemplo:

    ```cpp
    int a = 5, b = 10;
    bool resultado = (a < b) && (a != b); // true
    ```

### **Control de flujo**
- **Condicionales**: `if`, `else if`, `else` permiten realizar diferentes acciones basadas en condiciones.
- **Bucles**: `for`, `while`, `do-while` permiten ejecutar un bloque de código varias veces.

Ejemplo de un bucle `for`:

    ```cpp
    for (int i = 0; i < 5; ++i) {
        std::cout << "i: " << i << std::endl;
    }
    ```

### **static_cast**
- `static_cast` se usa para convertir un tipo de dato en otro de manera explícita.
- Es útil cuando necesitas realizar operaciones que solo funcionan con ciertos tipos, como el operador `%`, que solo funciona con enteros.
  
Ejemplo de uso:

    ```cpp
    double num1 = 5.9;
    int entero = static_cast<int>(num1); // La parte decimal se pierde
    ```


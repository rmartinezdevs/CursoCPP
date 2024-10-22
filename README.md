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


## **Sección 2: Funciones y Modularidad**

### **Estructura de una función en C++**
- Una función en C++ es un bloque de código que realiza una tarea específica y se puede reutilizar a lo largo del programa.
- Una función tiene un **tipo de retorno**, un **nombre**, y puede tener **parámetros** opcionales que recibe para trabajar.
  
- Ejemplo básico de función:

    ```cpp
    int sumar(int a, int b) {
        return a + b;
    }
    ```

- Para invocar una función, simplemente usamos su nombre y pasamos los argumentos necesarios:

    ```cpp
    int resultado = sumar(5, 3); // Resultado será 8
    ```

### **Paso de parámetros**
- En C++, existen dos formas principales de pasar parámetros a una función: **por valor** y **por referencia**.

#### **Paso por valor**
- Cuando pasamos un parámetro por valor, se crea una **copia** del argumento original. Los cambios dentro de la función no afectan al valor original.
  
  Ejemplo de paso por valor:

    ```cpp
    void duplicar(int numero) {
        numero = numero * 2; // Esto solo afecta dentro de la función
    }
    ```

#### **Paso por referencia**
- Cuando pasamos un parámetro por referencia, se pasa la **dirección de memoria** del argumento original, lo que permite modificar su valor directamente dentro de la función.

  Ejemplo de paso por referencia:

    ```cpp
    void duplicar(int& numero) {
        numero = numero * 2; // Esto afecta al valor original fuera de la función
    }
    ```

### **Funciones con valores predeterminados**
- Es posible definir valores predeterminados para los parámetros de una función. Si no se pasa un argumento, la función usará el valor por defecto.
  
  Ejemplo de función con valores predeterminados:

    ```cpp
    void imprimirMensaje(std::string mensaje = "Hola, mundo!") {
        std::cout << mensaje << std::endl;
    }
    ```

- Llamadas posibles:

    ```cpp
    imprimirMensaje(); // Usa el valor predeterminado y muestra "Hola, mundo!"
    imprimirMensaje("Bienvenido!"); // Muestra "Bienvenido!"
    ```

### **Sobrecarga de funciones**
- La **sobrecarga de funciones** permite definir varias funciones con el mismo nombre pero diferentes tipos o números de parámetros. C++ selecciona la versión correcta en función de los argumentos que se pasen.
  
  Ejemplo de sobrecarga:

    ```cpp
    int sumar(int a, int b) {
        return a + b;
    }

    double sumar(double a, double b) {
        return a + b;
    }
    ```

- Según el tipo de los argumentos, C++ elegirá la versión correcta de la función:

    ```cpp
    sumar(5, 3);        // Llama a la versión con enteros
    sumar(2.5, 3.7);    // Llama a la versión con decimales
    ```

### **Funciones `inline`**
- Las funciones `inline` le indican al compilador que inserte el código de la función directamente en el lugar donde se llama, en lugar de hacer una llamada regular a la función. Esto puede mejorar el rendimiento en funciones pequeñas, pero debe usarse con cuidado.

#### **¿Cuándo y por qué usar funciones `inline`?**
- Las funciones `inline` son útiles cuando tienes funciones pequeñas que se llaman frecuentemente. El uso de funciones `inline` evita el coste de una llamada de función regular (como almacenar variables en la pila o saltar a otra ubicación en la memoria).
- Sin embargo, usar muchas funciones `inline` en funciones grandes puede aumentar el tamaño del código y reducir la eficiencia de la caché, lo que puede llevar a problemas de rendimiento en lugar de optimizarlo.

  Ejemplo de función `inline`:

    ```cpp
    inline int cuadrado(int x) {
        return x * x;
    }
    ```

### **Modularidad en C++**
- La modularidad en C++ permite organizar el código dividiendo las funciones y clases en **archivos de cabecera** (`.h`) y **archivos de implementación** (`.cpp`). Esto facilita la reutilización del código y mejora su mantenimiento.

#### **Archivo de cabecera (`.h`)**
- Un archivo de cabecera contiene las **declaraciones** de funciones y clases. Este archivo es incluido en los archivos `.cpp` que necesitan utilizar esas funciones o clases.
  
  Ejemplo de archivo de cabecera:

    ```cpp
    #ifndef OPERACIONES_H
    #define OPERACIONES_H

    double sumar(double num1, double num2);
    double restar(double num1, double num2);
    double multiplicar(double num1, double num2);
    double dividir(double num1, double num2);
    int modulo(int num1, int num2);

    #endif
    ```

#### **Archivo de implementación (`.cpp`)**
- Un archivo de implementación contiene las **definiciones** de las funciones declaradas en el archivo de cabecera. Es donde se implementa la lógica real de cada función.

  Ejemplo:

    ```cpp
    #include "Operaciones.h"

    double sumar(double num1, double num2) {
        return num1 + num2;
    }

    double restar(double num1, double num2) {
        return num1 - num2;
    }

    double multiplicar(double num1, double num2) {
        return num1 * num2;
    }

    double dividir(double num1, double num2) {
        return num1 / num2;
    }

    int modulo(int num1, int num2) {
        return num1 % num2;
    }
    ```

#### **Archivo principal (`main.cpp`)**
- El archivo principal contiene la función `main()`, que es el punto de entrada del programa, y desde donde se invocan las funciones implementadas en los otros archivos.

  Ejemplo de archivo `main.cpp`:

    ```cpp
    #include <iostream>
    #include "Operaciones.h"

    int main() {
        double num1 = 10, num2 = 5;
        std::cout << "La suma es: " << sumar(num1, num2) << std::endl;
        return 0;
    }
    ```

---

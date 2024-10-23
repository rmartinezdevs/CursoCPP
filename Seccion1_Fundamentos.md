# Sección 1: Fundamentos de C++

## Estructura básica de un programa en C++

- Un programa en C++ siempre comienza con la función `main()`, que es el punto de entrada del programa.
- Para la entrada y salida de datos, se utilizan las funciones `cin` y `cout`, que son parte de la biblioteca estándar `<iostream>`.
  
### Ejemplo básico de programa:
```
#include <iostream>

int main()
{
  std::cout << "¡Hola, Mundo!" << std::endl;
  return 0;
}
```

En este ejemplo, se imprime "¡Hola, Mundo!" en la consola.

---

## Tipos de datos y variables

- En C++, los tipos de datos básicos incluyen:
  - **int**: para números enteros.
  - **float** y **double**: para números con decimales.
  - **char**: para caracteres.
  - **bool**: para valores booleanos (verdadero o falso).

### Ejemplo de declaración de variables:
```
int numero = 42;
double decimal = 3.14;
char letra = 'A';
bool esVerdad = true;
```

---

## Operadores

- **Operadores aritméticos**: `+`, `-`, `*`, `/`, `%` (el operador `%` solo funciona con enteros).
- **Operadores lógicos**: `&&` (y lógico), `||` (o lógico), `!` (negación lógica).
- **Operadores de comparación**: `==`, `!=`, `>`, `<`, `>=`, `<=`.

### Ejemplo de uso de operadores:
```
int a = 5, b = 10;
bool resultado = (a < b) && (a != b);
// true
```

---

## Control de flujo

### Condicionales:
- El **if**, **else if** y **else** permiten realizar diferentes acciones basadas en condiciones.

### Ejemplo de condicional:
```
int numero = 5;

if (numero > 0)
{
  std::cout << "El número es positivo." << std::endl;
}
else
{
  std::cout << "El número es negativo o cero." << std::endl;
}
```

### Bucles:
- Los bucles **for**, **while** y **do-while** permiten ejecutar un bloque de código varias veces.

### Ejemplo de un bucle `for`:
```
for (int i = 0; i < 5; ++i)
{
  std::cout << "i: " << i << std::endl;
}
```

---

## `static_cast`

- El **`static_cast`** se usa para convertir de un tipo de dato a otro de manera explícita.
- Es útil cuando necesitas realizar operaciones que solo funcionan con ciertos tipos, como el operador `%`, que solo funciona con enteros.

### Ejemplo de uso:
```
double num1 = 5.9;
int entero = static_cast<int>(num1);
// La parte decimal se pierde
std::cout << "Valor convertido: " << entero << std::endl;
// Muestra: 5
```

---

## Entrada y salida de datos

- Para leer datos del usuario, se usa **`cin`**.
- Para mostrar datos al usuario, se usa **`cout`**.

### Ejemplo:
```
int edad;
std::cout << "Introduce tu edad: ";
std::cin >> edad;
std::cout << "Tienes " << edad << " años." << std::endl;
```

---

## Constantes

- Las constantes se declaran usando la palabra clave `const`. Una vez asignado el valor, no puede cambiar.

### Ejemplo:
```
const double PI = 3.14159;
```

---

## Comentarios

- Los comentarios de una línea se escriben con `//`.
- Los comentarios de múltiples líneas se encierran entre `/*` y `*/`.

### Ejemplo:
```
// Este es un comentario de una línea

/* Este es un comentario de varias líneas. */
```

---

## Buenas prácticas:

1. **Nombres de variables descriptivos**: Usa nombres claros y descriptivos para tus variables, lo que facilita la lectura del código.
   - Ejemplo: en lugar de usar `x` o `y`, usa nombres como `edad` o `salario`.

2. **Comentarios**: Documenta tu código con comentarios para que otros (o tú mismo en el futuro) puedan entenderlo mejor.

3. **Constantes**: Usa `const` para los valores que no deben cambiar a lo largo del programa.

4. **Indentación**: Mantén una buena estructura con indentación adecuada para mejorar la legibilidad del código.

---

**Fin de la Sección 1**

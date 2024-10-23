# Sección 2: Funciones y Modularidad

## Funciones en C++

Una función en C++ es un bloque de código que realiza una tarea específica. Las funciones permiten la reutilización del código, lo que mejora la eficiencia y la claridad de un programa.

- Una función tiene:
  - Un **tipo de retorno** (el tipo de dato que devuelve).
  - Un **nombre**.
  - **Parámetros** opcionales que recibe para trabajar.
  - Un **bloque de código** que realiza la acción deseada.

### Ejemplo básico de función:
```
int sumar(int a, int b) { return a + b; }
```

En este ejemplo, la función `sumar` toma dos enteros como parámetros, los suma y devuelve el resultado.

### Uso de la función:
```
int resultado = sumar(3, 4);
std::cout << "El resultado es: " << resultado << std::endl;
```

---

## Paso de parámetros

En C++, los parámetros pueden pasarse de dos maneras: **por valor** o **por referencia**.

### Paso por valor:

Cuando pasas un parámetro por valor, el valor del argumento se copia dentro de la función. Los cambios realizados en la copia no afectan al valor original.

### Ejemplo de paso por valor:
```
void duplicar(int numero)
{
  numero = numero * 2;
  // Este cambio solo afecta dentro de la función
}
```
En este caso, cualquier cambio que se haga en `numero` no afectará a la variable original que fue pasada a la función.

### Paso por referencia:

Cuando pasas un parámetro por referencia, pasas la **dirección de memoria** del argumento original, lo que significa que la función puede modificar directamente la variable original.

### Ejemplo de paso por referencia:
```
void duplicar(int& numero)
{
  numero = numero * 2
  // Este cambio afecta a la variable original
}
```

Aquí, `numero` es una referencia a la variable original, por lo que cualquier cambio hecho dentro de la función se reflejará fuera de ella.

---

## Funciones con valores predeterminados

En C++, es posible dar valores predeterminados a los parámetros de una función. Esto es útil cuando la función puede usarse de diferentes maneras, pero a veces no necesitas pasar todos los argumentos.

### Ejemplo:
```
void imprimirMensaje(std::string mensaje = "Hola, mundo!")
{
  std::cout << mensaje << std::endl;
}
```

Puedes llamar a la función de dos maneras:
```
imprimirMensaje();
// Imprime "Hola, mundo!"
imprimirMensaje("Bienvenido!");
// Imprime "Bienvenido!"
```

---

## Sobrecarga de funciones

La **sobrecarga de funciones** te permite definir varias funciones con el mismo nombre pero con diferentes tipos o números de parámetros. C++ selecciona automáticamente la versión correcta en función de los argumentos que se le pasan.

### Ejemplo de sobrecarga:
```
int sumar(int a, int b)
{
  return a + b;
}

double sumar(double a, double b)
{
  return a + b;
}
```

Dependiendo del tipo de los argumentos que pases, C++ elegirá la versión correcta de la función:
```
int resultado1 = sumar(5, 3);
// Llama a la versión con enteros
double resultado2 = sumar(2.5, 3.7);
// Llama a la versión con doubles
```

---

## Funciones `inline`

Las funciones **inline** son una sugerencia al compilador para que inserte el código de la función directamente en el lugar donde se invoca, en lugar de hacer una llamada de función normal.

### ¿Por qué usar funciones `inline`?

- Las funciones **inline** pueden mejorar el rendimiento en funciones pequeñas y frecuentemente usadas, eliminando la sobrecarga de una llamada de función.
  
### Ejemplo de función `inline`:
```
inline int cuadrado(int x) { return x * x; }
```

**Nota**: Debes usar funciones `inline` solo para funciones muy pequeñas. Si una función es grande, convertirla en `inline` puede causar problemas de rendimiento debido al aumento del tamaño del código.

---

## Modularidad en C++

La **modularidad** en C++ te permite organizar el código dividiendo las funciones y clases en **archivos de cabecera** (`.h`) y **archivos de implementación** (`.cpp`). Esto mejora la legibilidad y la reutilización del código.

### Archivo de cabecera (`.h`):

- Un archivo de cabecera contiene las **declaraciones** de funciones, clases y otras estructuras. Este archivo es incluido en los archivos `.cpp` que necesitan utilizar esas funciones o clases.

### Ejemplo de archivo de cabecera:
```
#ifndef OPERACIONES_H #define OPERACIONES_H

int sumar(int a, int b);
int restar(int a, int b);
double multiplicar(double a, double b);
double dividir(double a, double b);

#endif
```

### Archivo de implementación (`.cpp`):

- Un archivo de implementación contiene las **definiciones** de las funciones que fueron declaradas en el archivo de cabecera.

### Ejemplo de archivo de implementación:
```
#include "Operaciones.h"

int sumar(int a, int b)
{
  return a + b;
}

int restar(int a, int b)
{
  return a - b;
}

double multiplicar(double a, double b)
{
  return a * b;
}

double dividir(double a, double b)
{
  if (b != 0)
  {
    return a / b;
  }
  else
  {
    throw std::invalid_argument("División por cero");
  }
}
```

---

## Buenas prácticas en el uso de funciones y modularidad:

1. **Uso de funciones pequeñas y bien definidas**: Las funciones deben realizar una tarea específica. Si una función hace demasiadas cosas, divídela en varias funciones más pequeñas.

2. **Uso de archivos de cabecera e implementación**: Mantén las declaraciones en los archivos `.h` y las definiciones en los archivos `.cpp` para mantener el código organizado y facilitar la reutilización.

3. **Comentarios en las funciones**: Documenta cada función para que sea claro su propósito y el significado de sus parámetros.

4. **Uso de `inline` con precaución**: Solo utiliza `inline` en funciones pequeñas y frecuentemente usadas, donde realmente se beneficie de eliminar la sobrecarga de la llamada.

5. **Evitar duplicación de código**: Si ves que partes del código se repiten, considera convertirlas en funciones reutilizables.

---

**Fin de la Sección 2**

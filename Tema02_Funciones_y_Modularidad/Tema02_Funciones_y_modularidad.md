# **Tema 2: Funciones y Modularidad en C++**

## **Introducción**

Las funciones son bloques de código reutilizables que realizan tareas específicas dentro de un programa. Son fundamentales para estructurar y organizar el código, permitiendo escribir programas más claros, mantenibles y modulares. La modularidad, por su parte, permite dividir el código en múltiples archivos para facilitar su gestión y reutilización.

En esta sección aprenderás cómo definir, usar y organizar funciones, además de cómo estructurar proyectos de manera modular en C++.

---

## **Teoría Ampliada**

### **1. Definición y Uso de Funciones**

Una función en C++ consta de tres partes principales:
1. **Tipo de retorno**: Indica qué tipo de dato devuelve la función.
2. **Nombre de la función**: Identificador único para llamar a la función.
3. **Parámetros**: Valores que la función puede recibir como entrada.

#### **Ejemplo básico**:
```
#include <iostream>

// Declaración de una función que suma dos números
int sumar(int a, int b)
{
    return a + b;
}

int main()
{
    int resultado = sumar(5, 3); // Llamada a la función
    std::cout << "La suma es: " << resultado << std::endl;
    return 0;
}
```

#### **Explicación de componentes**:
- **Declaración**: Especifica el nombre, tipo de retorno y parámetros de la función.
- **Definición**: Contiene el cuerpo de la función, donde se implementa la lógica.
- **Llamada**: Invoca la función desde otra parte del programa.

---

### **2. Tipos de Parámetros en Funciones**

1. **Paso por valor**: Se pasa una copia del argumento.
   - Cambios dentro de la función **no** afectan al valor original.
   ```
   void duplicarPorValor(int num)
   {
       num *= 2; // Solo afecta dentro de la función
   }
   ```

2. **Paso por referencia**: Se pasa la dirección del argumento.
   - Cambios dentro de la función **sí** afectan al valor original.
   ```
   void duplicarPorReferencia(int& num)
   {
       num *= 2; // Cambia el valor original
   }
   ```

3. **Uso de `const` para referencias**: Protege los datos pasados por referencia.
   ```
   void mostrar(const int& num)
   {
       std::cout << "Valor: " << num << std::endl; // Solo lectura
   }
   ```

---

### **3. Funciones con Valores Predeterminados**

Puedes definir valores predeterminados para los parámetros. Si no se pasan argumentos, se usan los valores predeterminados.

#### **Ejemplo**:
```
void saludar(std::string nombre = "Invitado")
{
    std::cout << "Hola, " << nombre << "!" << std::endl;
}

int main()
{
    saludar(); // Usa el valor predeterminado
    saludar("Pedro"); // Usa el valor proporcionado
    return 0;
}
```

---

### **4. Sobrecarga de Funciones**

Permite definir varias funciones con el mismo nombre pero diferentes firmas (número o tipo de parámetros).

#### **Ejemplo**:
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

- **Nota**: El compilador selecciona la función correcta según los argumentos.

---

### **5. Modularidad: Archivos `.h` y `.cpp`**

#### **Archivos de cabecera (`.h`)**:
- Contienen declaraciones de funciones, clases o constantes.

#### **Archivos de implementación (`.cpp`)**:
- Contienen la definición de las funciones declaradas en los archivos `.h`.

#### **Ejemplo de proyecto modular**:

**Archivo `operaciones.h`**:
```
#ifndef OPERACIONES_H
#define OPERACIONES_H

int sumar(int a, int b);
int restar(int a, int b);

#endif
```

**Archivo `operaciones.cpp`**:
```
#include "operaciones.h"

int sumar(int a, int b)
{
    return a + b;
}

int restar(int a, int b)
{
    return a - b;
}
```

**Archivo `main.cpp`**:
```
#include <iostream>
#include "operaciones.h"

int main()
{
    int resultado = sumar(10, 5);
    std::cout << "La suma es: " << resultado << std::endl;
    return 0;
}
```

---

### **6. Guardas de Inclusión (`#ifndef`, `#define`, `#endif`)**

Cuando trabajamos en proyectos modulares con múltiples archivos `.h` y `.cpp`, es común que un archivo de cabecera sea incluido varias veces, ya sea directamente o de forma indirecta. Esto puede causar errores de redefinición de símbolos durante la compilación. Para evitar estos problemas, usamos **guardas de inclusión** (*include guards*).

---

#### **¿Qué son las guardas de inclusión?**

Son una técnica basada en macros preprocesadoras que aseguran que el contenido de un archivo de cabecera (`.h`) solo se procese una vez por el compilador, sin importar cuántas veces sea incluido.

---

#### **Cómo funcionan las guardas de inclusión**

1. **`#ifndef`**: Significa "si no está definido". Verifica si un identificador ha sido definido previamente.
2. **`#define`**: Define un identificador para que las inclusiones futuras del archivo sean ignoradas.
3. **`#endif`**: Marca el final del bloque de la guarda.

#### **Ejemplo básico**:
```
#ifndef OPERACIONES_H  // Si OPERACIONES_H no está definido...
#define OPERACIONES_H  // Definir OPERACIONES_H

// Declaraciones del archivo de cabecera
int sumar(int a, int b);
int restar(int a, int b);

#endif // Fin de la guarda
```

---

#### **Flujo simplificado**

1. Al incluir el archivo por primera vez:
   - `OPERACIONES_H` **no está definido**, así que el compilador procesa el contenido entre `#ifndef` y `#endif`.
   - Luego define `OPERACIONES_H`.

2. Al incluir el archivo nuevamente:
   - `OPERACIONES_H` **ya está definido**, así que el compilador ignora todo el contenido del archivo.

---

#### **Ventajas de las guardas de inclusión**

- **Previenen errores de redefinición**: Especialmente útil en proyectos grandes.
- **Estandarizadas**: Soportadas por todos los compiladores modernos.

---

#### **Alternativa moderna: `#pragma once`**

Otra forma de prevenir múltiples inclusiones es usando `#pragma once`, una directiva más simple y directa. El compilador automáticamente ignora los archivos que ya se han procesado.

**Ejemplo:**
```
#pragma once

int sumar(int a, int b);
int restar(int a, int b);
```

**Nota**: Aunque `#pragma once` es ampliamente soportado, no es parte del estándar de C++. Por ello, las guardas de inclusión (`#ifndef`) son la opción más robusta y portátil.

---

## **Buenas Prácticas**

1. **Usa nombres descriptivos para las funciones**: Evita nombres como `f1` o `calc`. Usa nombres como `sumar` o `calcularArea`.
2. **Divide el código en archivos separados**: Mantén las funciones relacionadas en un mismo archivo `.h` y `.cpp`.
3. **Documenta las funciones**: Agrega comentarios que expliquen qué hace cada función.
4. **Evita parámetros innecesarios**: Pasa solo los datos que realmente necesita la función.
5. **Usa `const` siempre que sea posible**: Protege los datos que no necesitan ser modificados.
6. **Usa identificadores únicos**: Por convención, los nombres suelen basarse en el archivo y estar en mayúsculas, como `OPERACIONES_H`.
7. **Prefiere guardas sobre `#pragma once` para portabilidad**.
8. **Coloca siempre las guardas al inicio del archivo `.h`**: Esto asegura que el archivo se proteja desde el comienzo.

---

## **Conclusión**

En esta sección, aprendiste a estructurar y reutilizar el código con funciones y a organizar proyectos de manera modular. Estos conceptos son fundamentales para crear aplicaciones complejas y bien organizadas.

---

**Fin del tema 2**

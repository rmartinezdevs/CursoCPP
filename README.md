# Curso Completo de C++ - Repositorio Personal de Aprendizaje

Este repositorio contiene el contenido teórico y práctico del curso completo de C++ que estoy desarrollando personalmente. Su objetivo es documentar mi progreso en el dominio del lenguaje C++ al 100%, abarcando desde los fundamentos hasta temas avanzados.

## Estructura del repositorio

El contenido del curso está organizado en diferentes secciones, cada una enfocada en un aspecto clave del lenguaje C++. A continuación se describe la estructura y el contenido disponible.

---

## Secciones del curso

### 1. [Fundamentos de C++](Seccion1_Fundamentos.md)

En esta sección se cubren los conceptos básicos de C++:
- Estructura básica de un programa en C++.
- Tipos de datos y variables.
- Operadores aritméticos, lógicos y de comparación.
- Control de flujo (condicionales y bucles).
- Conversión de tipos con `static_cast`.
- Buenas prácticas en el uso de variables y funciones.

---

### 2. [Funciones y Modularidad](Seccion2_Funciones.md)

Esta sección explica cómo definir y utilizar funciones en C++:
- Paso de parámetros por valor y por referencia.
- Funciones con valores predeterminados.
- Sobrecarga de funciones.
- Funciones `inline` y cuándo usarlas.
- Conceptos de modularidad: cómo organizar el código en archivos de cabecera (`.h`) y archivos de implementación (`.cpp`).
- Buenas prácticas al trabajar con funciones.

---

### 3. [Punteros y Memoria Dinámica](Seccion3_Punteros.md)

Aquí se profundiza en la gestión de memoria y el uso de punteros:
- Concepto de punteros y cómo funcionan.
- Memoria dinámica: diferencias entre stack y heap.
- Punteros inteligentes (`unique_ptr`, `shared_ptr`, `weak_ptr`) y su uso.
- Cómo evitar fugas de memoria y gestionar correctamente los recursos.
- Buenas prácticas en el manejo de punteros.

---

### 4. [Arrays, Punteros y Vectores en C++](Seccion4_ArraysVectores.md)

En esta sección se cubren las estructuras de datos básicas para almacenar colecciones de datos en C++:
- Arrays en C++: declaración, inicialización y acceso a elementos.
- Arrays multidimensionales.
- Uso de punteros con arrays.
- Vectores de la STL (Standard Template Library): creación, manipulación y uso de `push_back()` y `pop_back()`.
- Diferencias entre `i++` y `++i` en bucles.
- Buenas prácticas al usar arrays y vectores, incluyendo cuándo elegir uno sobre el otro.

---

### 5. [Ámbito de Variables y Tipos Definidos por el Usuario](Seccion5_Ambito_Variables.md)

Esta sección se enfoca en el control del ámbito de variables y el uso de tipos definidos por el usuario:
- Ámbito de variables: local, global y estática.
- Constantes: `const` y `constexpr`, sus diferencias y cuándo utilizarlas.
- Enumeraciones con `enum` y `enum class` y sus ventajas.
- Lectura y escritura de archivos usando `fstream`.
- Buenas prácticas en el control del ámbito y la creación de constantes.

---

### 6. [Clases y Objetos en C++](Seccion6_ClasesObjetos.md)

Esta sección cubre los conceptos fundamentales de la Programación Orientada a Objetos (POO) en C++:
- **Definición de clases y objetos**: Conceptos básicos y cómo se relacionan.
- **Constructores y destructores**: Diferentes tipos de constructores (predeterminado, parametrizado y de copia) y el uso del destructor para liberar recursos.
- **Encapsulación**: Uso de modificadores de acceso (`public`, `private`, `protected`) y métodos `getter` y `setter`.
- **Herencia**: Cómo una clase puede heredar atributos y métodos de otra, incluyendo los tipos de herencia (`public`, `protected`, `private`).
- **Polimorfismo**: Uso de funciones virtuales y el operador `override` para personalizar comportamientos en clases derivadas.
- **Clases abstractas**: Definición de métodos virtuales puros y cómo se implementan en clases derivadas.
- **Buenas prácticas en OOP**:
  - Inicialización de atributos en el constructor.
  - Uso de `override` y destructores para evitar fugas de memoria.
  - Cuándo elegir entre herencia y composición.
  - Aplicación de principios como el principio de responsabilidad única.

---

### 7. [Sobrecarga de Operadores en C++](Seccion7_SobrecargaOperadores.md)

Esta sección introduce la sobrecarga de operadores para clases personalizadas:
- **Introducción a la Sobrecarga de Operadores**: Motivos y beneficios de sobrecargar operadores en C++.
- **Sintaxis de Sobrecarga de Operadores**: Cómo definir operadores sobrecargados dentro y fuera de la clase.
- **Tipos de Operadores que se pueden Sobrecargar**: Lista de operadores permitidos y no permitidos en la sobrecarga.
- **Ejemplos Comunes de Sobrecarga**: Sobrecarga de operadores `+`, `==`, `<<`, y `-` unario.
- **Buenas prácticas**:
  - Usar sobrecarga solo cuando tenga sentido lógico.
  - Aplicar `const` cuando sea posible.
  - Preferir el uso de `friend` para operadores de entrada y salida.
  - Evitar sobrecargar operadores innecesarios y respetar la simetría.

---



## Recomendaciones

- Es recomendable que uses un entorno de desarrollo adecuado como **Visual Studio 2022** o **Visual Studio Code** con extensiones de C++.
- Documenta tu progreso, y si encuentras mejoras o errores, siéntete libre de contribuir al repositorio.

---

## Contribuir al curso

Si quieres mejorar el curso, agregar nuevas secciones o corregir errores, puedes hacer un **fork** de este repositorio y enviar tus cambios mediante un **pull request**.

---

**Fin del README**

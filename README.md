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

### 6. [Clases y Objetos en C++](Seccion6_ClasesYObjetos.md)

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

### 8. [Programación Genérica en C++](Seccion8_ProgramacionGenerica.md)

En esta sección exploramos cómo hacer el código más flexible y reutilizable con el uso de plantillas en C++:
- **Plantillas de Función**: Creación de funciones genéricas.
- **Plantillas de Clase**: Definición de clases que pueden trabajar con cualquier tipo de dato.
- **Parámetros de Plantilla Múltiples**: Uso de múltiples tipos en funciones y clases.
- **Deducción de Tipos y Especificación Explícita de Tipos**: Cómo especificar tipos en plantillas.
- **Especialización de Plantillas**: Definir comportamientos específicos para ciertos tipos de datos.
- **Plantillas con Parámetros Constantes**: Creación de estructuras de tamaño fijo en tiempo de compilación.
- **Ventajas y Consideraciones**: Eficiencia, flexibilidad y limitaciones.
- **Buenas prácticas**:
  - Nombres claros para los parámetros de tipo.
  - Modularizar el Código.
  - Evitar Uso Excesivo.
  - Documentación adecuada.

---

### 9. [Contenedores y Algoritmos en la STL](Seccion9_STL.md)

En esta sección se explora la **Standard Template Library (STL)**, que proporciona herramientas optimizadas para trabajar con colecciones de datos en C++. Los principales temas son:

- **Contenedores Secuenciales**: Almacenan elementos en un orden definido. Incluye `vector`, `list` y `deque`.
- **Contenedores Asociativos**: Estructuras organizadas que permiten búsquedas rápidas. Incluye `set` y `map`.
- **Contenedores de Tipo Pilas y Colas**: Modelan estructuras de datos LIFO y FIFO. Incluye `stack`, `queue` y `priority_queue`.
- **Iteradores**: Objetos para recorrer y manipular elementos de los contenedores.
- **Algoritmos de la STL**: Funciones genéricas como `sort`, `find`, `accumulate`, entre otros, para modificar, buscar y contar elementos en contenedores.
- **Buenas Prácticas**:
  - Selección adecuada de contenedores para cada caso.
  - Uso eficiente de iteradores sin copiar datos innecesariamente.
  - Aprovechar los algoritmos de la STL para mejorar rendimiento y claridad.
- **Recomendaciones según la Necesidad**:
  - `vector` para accesos rápidos a elementos.
  - `deque` para inserciones y eliminaciones en ambos extremos.
  - `list` para operaciones frecuentes en cualquier punto del contenedor.
  - `set` para garantizar unicidad y accesos rápidos.
  - `map` para pares clave-valor con búsqueda eficiente.

---

### 10. [Iteradores Avanzados y Operaciones en Contenedores](Seccion10_IteradoresAvanzados.md)

En esta sección se explora el uso avanzado de iteradores en C++ y operaciones en contenedores. Los principales temas son:

- **Tipos de Iteradores**: Diferentes tipos de iteradores en la STL, como `Random Access Iterator`, `Bidirectional Iterator`, `Forward Iterator` y `Inserter Iterator`, cada uno con funcionalidades específicas.
- **Iteradores Constantes**: Uso de iteradores constantes para proteger datos y evitar modificaciones accidentales.
- **Iteradores Inversos**: Uso de iteradores inversos para recorrer contenedores desde el final al principio.
- **Operaciones Avanzadas en Contenedores**: Inserciones en rangos específicos, búsquedas condicionales y manipulación de contenedores con `std::copy`, `std::inserter`, `std::find_if`, entre otros.
- **Buenas Prácticas**: 
  - Usar iteradores constantes para asegurar la inmutabilidad de los datos.
  - Seleccionar el iterador adecuado según la operación.
  - Aprovechar los algoritmos de la STL para optimizar la legibilidad y rendimiento.
  - Minimizar copias innecesarias de elementos y utilizar referencias cuando sea posible.

---

## Recomendaciones

- Es recomendable que uses un entorno de desarrollo adecuado como **Visual Studio 2022** o **Visual Studio Code** con extensiones de C++.
- Documenta tu progreso, y si encuentras mejoras o errores, siéntete libre de contribuir al repositorio.

---

## Contribuir al curso

Si quieres mejorar el curso, agregar nuevas secciones o corregir errores, puedes hacer un **fork** de este repositorio y enviar tus cambios mediante un **pull request**.

---

**Fin del README**

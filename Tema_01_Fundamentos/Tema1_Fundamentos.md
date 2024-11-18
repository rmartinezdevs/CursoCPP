# **Sección 1: Fundamentos de C++**

## **Introducción**

El lenguaje C++ es ampliamente reconocido por su versatilidad y eficiencia. Permite desarrollar desde sistemas operativos y videojuegos hasta aplicaciones científicas y embebidas. Este tema cubre los conceptos esenciales que sientan las bases para trabajar con este poderoso lenguaje.

---

## **Teoría Ampliada**

### **1. Estructura Básica de un Programa en C++**

Un programa en C++ comienza siempre con la función `main()`. Es el punto de entrada del programa, y su sintaxis básica incluye:
- La inclusión de bibliotecas necesarias.
- La función `main()` con un valor de retorno entero.
- Operaciones básicas dentro del bloque de la función.

#### **Ejemplo**:
```
#include <iostream> // Biblioteca estándar para entrada y salida

int main() {
    std::cout << "¡Hola, Mundo!" << std::endl; // Imprime en la consola
    return 0; // Indica que el programa terminó correctamente
}
```

#### **Explicación de componentes**:
- `#include <iostream>`: Incluye las funciones de entrada y salida estándar.
- `std::cout`: Envía datos a la consola.
- `std::endl`: Inserta un salto de línea.
- `return 0;`: Indica al sistema operativo que el programa finalizó correctamente.

---

### **2. Tipos de Datos y Variables**

Los tipos de datos en C++ determinan el tamaño y tipo de los valores que las variables pueden almacenar.

#### **Tipos básicos**:
- **`int`**: Números enteros (4 bytes).
- **`float`** y **`double`**: Números con decimales (4 y 8 bytes respectivamente).
- **`char`**: Un carácter (1 byte).
- **`bool`**: Valores lógicos (`true` o `false`).

#### **Declaración e inicialización de variables**:
```
int edad = 25;
double precio = 19.99;
char inicial = 'P';
bool esActivo = true;
```

#### **Buenas prácticas**:
- Usa nombres significativos para las variables: en lugar de `x`, usa `edad` o `precio`.
- Inicializa siempre las variables para evitar valores basura.

---

### **3. Operadores**

Los operadores permiten realizar cálculos y comparaciones.

#### **Tipos principales de operadores**:
1. **Aritméticos**: Realizan operaciones matemáticas.
   ```
   int suma = 5 + 3; // Resultado: 8
   int resto = 10 % 3; // Resultado: 1
   ```

2. **Relacionales**: Comparan valores y devuelven `true` o `false`.
   ```
   bool mayor = (5 > 3); // true
   ```

3. **Lógicos**: Usados para evaluar expresiones booleanas.
   ```
   bool resultado = (5 > 3) && (3 < 8); // true
   ```

4. **Bit a bit** (opcional para esta sección): Manipulan directamente bits.
   ```
   int resultado = 5 & 3; // AND bit a bit
   ```

---

### **4. Control de Flujo**

#### **Estructuras condicionales**:
Permiten ejecutar bloques de código según condiciones.
```
if (edad >= 18) {
    std::cout << "Eres mayor de edad." << std::endl;
} else {
    std::cout << "Eres menor de edad." << std::endl;
}
```

#### **Bucles**:
Se utilizan para repetir bloques de código.

1. **`for`**: Ideal para iteraciones conocidas.
   ```
   for (int i = 1; i <= 5; ++i) {
       std::cout << "Iteración: " << i << std::endl;
   }
   ```

2. **`while`**: Repite mientras una condición sea verdadera.
   ```
   int i = 1;
   while (i <= 5) {
       std::cout << "Iteración: " << i << std::endl;
       i++;
   }
   ```

3. **`do-while`**: Similar a `while`, pero siempre ejecuta el bloque al menos una vez.
   ```
   int i = 1;
   do {
       std::cout << "Iteración: " << i << std::endl;
       i++;
   } while (i <= 5);
   ```

---

### **5. Conversión de Tipos**

#### **Conversión implícita**:
Ocurre automáticamente cuando no hay pérdida de información.
```
int entero = 42;
double decimal = entero; // Conversión implícita
```

#### **Conversión explícita (`static_cast`)**:
Se utiliza para forzar una conversión.
```
double valor = 5.9;
int entero = static_cast<int>(valor); // Pérdida de la parte decimal
```

---

### **6. Detalles Clave: `i++` vs `++i`**

1. **`i++` (post-incremento)**: Incrementa el valor después de usarlo.
   ```
   int i = 5;
   std::cout << i++; // Imprime 5, luego incrementa a 6
   ```

2. **`++i` (pre-incremento)**: Incrementa el valor antes de usarlo.
   ```
   int i = 5;
   std::cout << ++i; // Incrementa a 6, luego imprime 6
   ```

3. **Diferencia de rendimiento**:
   - En bucles simples, no hay diferencia significativa.
   - En objetos complejos (como iteradores de la STL), `++i` es más eficiente.

---

## **Buenas Prácticas**

1. **Usa nombres descriptivos**: Mejora la legibilidad y el mantenimiento del código.
2. **Indenta correctamente**: Una estructura bien indentada es más fácil de entender.
3. **Evita el uso excesivo de variables globales**: Prefiere variables locales para modularidad.
4. **Documenta tu código**: Agrega comentarios claros para explicar la lógica del programa.
5. **Usa `const` para valores inmutables**: Protege datos que no deberían cambiar.
6. **Usa `++i` en lugar de `i++` en bucles**: Es una práctica recomendada por eficiencia.

---

## **Conclusión**

En esta sección, hemos cubierto los conceptos básicos de C++: desde cómo escribir un programa simple hasta el manejo de operadores, control de flujo y conversiones de tipos. Estos fundamentos son esenciales para avanzar hacia temas más complejos y profundos.

---

**Fin del tema 1**

# **Tema 4: Ámbito de Variables y Constantes en C++**

## **Introducción**

El ámbito de las variables y el uso de constantes son conceptos fundamentales en la programación en C++. Comprender el ámbito permite estructurar el código de manera eficiente, mientras que las constantes protegen datos que no deben ser modificados. Este tema te ayudará a entender cómo y dónde existen las variables y cómo aprovechar las constantes para escribir código más seguro y claro.

---

## **Teoría Ampliada**

### **1. Ámbito de Variables**

El ámbito de una variable determina dónde puede ser accedida y utilizada dentro del programa. En C++, existen tres tipos principales de ámbito: **local**, **global** y **estático**.

#### **Ámbito Local**
- Las variables locales se definen dentro de funciones o bloques `{}`.
- Solo son accesibles dentro del bloque donde fueron declaradas.
- Se crean al entrar en el bloque y se destruyen al salir.

```
void ejemploLocal() {
    int x = 10; // Variable local
    std::cout << "Valor de x: " << x << std::endl;
}
// Aquí 'x' ya no existe
```

#### **Ámbito Global**
- Las variables globales se declaran fuera de todas las funciones.
- Son accesibles desde cualquier parte del programa.
- Persisten durante toda la ejecución del programa.

```
int globalVar = 100; // Variable global

void mostrarGlobal() {
    std::cout << "Valor de globalVar: " << globalVar << std::endl;
}
// Aquí globalVar sigue existiendo
```

#### **Ámbito Estático**
- Las variables estáticas dentro de una función conservan su valor entre llamadas.
- Las variables estáticas globales son accesibles solo dentro del archivo donde se declaran.

```
void contador() {
    static int count = 0; // Conserva su valor
    count++;
    std::cout << "Contador: " << count << std::endl;
}
```

#### **Comparación de Ámbitos**
| Tipo de Ámbito | Accesibilidad       | Tiempo de Vida             |
|----------------|---------------------|----------------------------|
| Local          | Dentro del bloque   | Durante la ejecución del bloque |
| Global         | Todo el programa    | Durante toda la ejecución  |
| Estático       | Dentro del bloque   | Persistente en memoria     |

---

### **2. Constantes en C++**

Las constantes son valores que no cambian durante la ejecución del programa. Usarlas mejora la seguridad del código y facilita la comprensión.

#### **`const`**
- Define un valor que no puede ser modificado después de su inicialización.
- Puede aplicarse a variables, referencias y punteros.

```
const double PI = 3.14159; // Constante de valor
const int& ref = PI;      // Referencia constante
```

#### **`constexpr`**
- Introducido en C++11, asegura que el valor sea evaluado en tiempo de compilación.
- Ideal para valores constantes utilizados en expresiones como tamaños de arrays.

```
constexpr int cuadrado(int x) {
    return x * x;
}

int arr[cuadrado(4)]; // Tamaño evaluado en compilación
```

#### **Diferencias entre `const` y `constexpr`**
| Característica    | `const`                  | `constexpr`               |
|-------------------|--------------------------|---------------------------|
| Evaluación        | Tiempo de ejecución      | Tiempo de compilación     |
| Aplicación        | Variables, punteros      | Expresiones y valores     |

---

### **3. Buenas Prácticas con Ámbito y Constantes**

1. **Evita variables globales**:
   - Prefiere el paso de parámetros a funciones para modularidad y claridad.
   
2. **Usa `const` para proteger datos inmutables**:
   - Protege valores que no deben ser modificados accidentalmente.

3. **Usa `constexpr` para cálculos en tiempo de compilación**:
   - Mejora el rendimiento reduciendo cálculos en tiempo de ejecución.

4. **Agrupa constantes relacionadas**:
   - Usa archivos de cabecera específicos para definir constantes reutilizables.

5. **Documenta el ámbito de las variables**:
   - Usa comentarios para indicar si una variable es local, global o estática.

---

## **Conclusión**

En este tema hemos explorado los diferentes tipos de ámbito y cómo usarlos de manera efectiva, junto con el uso de constantes para proteger datos. Estos conceptos son esenciales para escribir programas claros, robustos y eficientes.

---

**Fin del tema 4**

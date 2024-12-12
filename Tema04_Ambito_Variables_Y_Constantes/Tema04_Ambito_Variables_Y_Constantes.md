# **Tema 4: �mbito de Variables y Constantes en C++**

## **Introducci�n**

El �mbito de las variables y el uso de constantes son conceptos fundamentales en la programaci�n en C++. Comprender el �mbito permite estructurar el c�digo de manera eficiente, mientras que las constantes protegen datos que no deben ser modificados. Este tema te ayudar� a entender c�mo y d�nde existen las variables y c�mo aprovechar las constantes para escribir c�digo m�s seguro y claro.

---

## **Teor�a Ampliada**

### **1. �mbito de Variables**

El �mbito de una variable determina d�nde puede ser accedida y utilizada dentro del programa. En C++, existen tres tipos principales de �mbito: **local**, **global** y **est�tico**.

#### **�mbito Local**
- Las variables locales se definen dentro de funciones o bloques `{}`.
- Solo son accesibles dentro del bloque donde fueron declaradas.
- Se crean al entrar en el bloque y se destruyen al salir.

```
void ejemploLocal() {
    int x = 10; // Variable local
    std::cout << "Valor de x: " << x << std::endl;
}
// Aqu� 'x' ya no existe
```

#### **�mbito Global**
- Las variables globales se declaran fuera de todas las funciones.
- Son accesibles desde cualquier parte del programa.
- Persisten durante toda la ejecuci�n del programa.

```
int globalVar = 100; // Variable global

void mostrarGlobal() {
    std::cout << "Valor de globalVar: " << globalVar << std::endl;
}
// Aqu� globalVar sigue existiendo
```

#### **�mbito Est�tico**
- Las variables est�ticas dentro de una funci�n conservan su valor entre llamadas.
- Las variables est�ticas globales son accesibles solo dentro del archivo donde se declaran.

```
void contador() {
    static int count = 0; // Conserva su valor
    count++;
    std::cout << "Contador: " << count << std::endl;
}
```

#### **Comparaci�n de �mbitos**
| Tipo de �mbito | Accesibilidad       | Tiempo de Vida             |
|----------------|---------------------|----------------------------|
| Local          | Dentro del bloque   | Durante la ejecuci�n del bloque |
| Global         | Todo el programa    | Durante toda la ejecuci�n  |
| Est�tico       | Dentro del bloque   | Persistente en memoria     |

---

### **2. Constantes en C++**

Las constantes son valores que no cambian durante la ejecuci�n del programa. Usarlas mejora la seguridad del c�digo y facilita la comprensi�n.

#### **`const`**
- Define un valor que no puede ser modificado despu�s de su inicializaci�n.
- Puede aplicarse a variables, referencias y punteros.

```
const double PI = 3.14159; // Constante de valor
const int& ref = PI;      // Referencia constante
```

#### **`constexpr`**
- Introducido en C++11, asegura que el valor sea evaluado en tiempo de compilaci�n.
- Ideal para valores constantes utilizados en expresiones como tama�os de arrays.

```
constexpr int cuadrado(int x) {
    return x * x;
}

int arr[cuadrado(4)]; // Tama�o evaluado en compilaci�n
```

#### **Diferencias entre `const` y `constexpr`**
| Caracter�stica    | `const`                  | `constexpr`               |
|-------------------|--------------------------|---------------------------|
| Evaluaci�n        | Tiempo de ejecuci�n      | Tiempo de compilaci�n     |
| Aplicaci�n        | Variables, punteros      | Expresiones y valores     |

---

### **3. Buenas Pr�cticas con �mbito y Constantes**

1. **Evita variables globales**:
   - Prefiere el paso de par�metros a funciones para modularidad y claridad.
   
2. **Usa `const` para proteger datos inmutables**:
   - Protege valores que no deben ser modificados accidentalmente.

3. **Usa `constexpr` para c�lculos en tiempo de compilaci�n**:
   - Mejora el rendimiento reduciendo c�lculos en tiempo de ejecuci�n.

4. **Agrupa constantes relacionadas**:
   - Usa archivos de cabecera espec�ficos para definir constantes reutilizables.

5. **Documenta el �mbito de las variables**:
   - Usa comentarios para indicar si una variable es local, global o est�tica.

---

## **Conclusi�n**

En este tema hemos explorado los diferentes tipos de �mbito y c�mo usarlos de manera efectiva, junto con el uso de constantes para proteger datos. Estos conceptos son esenciales para escribir programas claros, robustos y eficientes.

---

**Fin del tema 4**

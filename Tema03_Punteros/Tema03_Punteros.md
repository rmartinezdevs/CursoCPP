# **Tema 3: Punteros y Referencias**

## **Introducción**

Los punteros y referencias son dos conceptos fundamentales en C++ que permiten manipular datos de manera directa y eficiente.
Estas herramientas proporcionan un control granular sobre la memoria, lo que las hace poderosas pero también propensas a errores si no se usan correctamente.
En este tema, aprenderás qué son, cómo se usan y por qué son importantes.

---

## **Teoría Ampliada**

### **1. Punteros en C++**

#### **¿Qué es un puntero?**
Un puntero es una variable que almacena la dirección de memoria de otra variable.
En lugar de contener directamente un valor, un puntero "apunta" a la ubicación donde está almacenado el dato.

#### **Declaración e inicialización de punteros**
Un puntero se declara usando el operador `*` junto al tipo de dato al que apunta.

```
int x = 10;
int* ptr = &x; // ptr almacena la dirección de memoria de x
```

#### **Operadores clave para punteros**
1. **`&` (Operador de dirección)**:
   - Obtiene la dirección de memoria de una variable.
   - Ejemplo: `&x` devuelve la dirección de `x`.

2. **`*` (Operador de desreferenciación)**:
   - Accede al valor almacenado en la dirección de memoria a la que apunta el puntero.
   - Ejemplo: `*ptr` devuelve el valor de `x`.

```
std::cout << "Dirección de x: " << &x << std::endl; // Muestra la dirección de x
std::cout << "Valor de x usando ptr: " << *ptr << std::endl; // Muestra el valor 10
```

#### **Punteros nulos**
Un puntero que no apunta a ninguna dirección válida se conoce como puntero nulo. Se inicializa con `nullptr` (C++11 en adelante).

```
int* punteroNulo = nullptr; // No apunta a ninguna dirección
```

#### **Errores comunes al usar punteros**
1. **Punteros colgantes**: Un puntero que apunta a una dirección de memoria que ya no es válida.
2. **Acceso a punteros no inicializados**: Usar un puntero sin inicializar puede llevar a comportamientos impredecibles.

---

### **2. Referencias en C++**

#### **¿Qué es una referencia?**
Una referencia es un alias de otra variable, lo que significa que se comporta como un segundo nombre para esa variable.
Las referencias deben inicializarse al declararse y no pueden cambiar para referirse a otra variable.

```
int x = 20;
int& ref = x; // ref es un alias para x
```

#### **Usos comunes de las referencias**
1. **Paso de parámetros por referencia**:
   - Permite que una función modifique directamente los argumentos originales.
   ```
   void incrementar(int& num)
   {
       num++;
   }
   ```

2. **Retorno de valores por referencia**:
   - Útil para evitar copias innecesarias o para modificar directamente el valor retornado.
   ```
   int& obtenerMayor(int& a, int& b)
   {
       return (a > b) ? a : b;
   }
   ```

#### **Diferencias clave entre punteros y referencias**
| Característica         | Punteros                     | Referencias                  |
|------------------------|------------------------------|------------------------------|
| Inicialización         | Opcional                    | Obligatoria                 |
| Reasignación           | Puede apuntar a otra variable | No puede cambiar su objetivo |
| Uso de operadores      | Usa `*` y `&`               | Se accede directamente       |

---

### **3. Manejo de Memoria con Punteros**

#### **Asignación dinámica de memoria**
C++ permite reservar memoria en el *heap* usando `new` y liberar esa memoria con `delete`.

```
int* ptr = new int(42); // Reserva memoria para un entero e inicializa con 42
std::cout << *ptr << std::endl; // Muestra el valor 42
delete ptr; // Libera la memoria
ptr = nullptr; // Evita que el puntero quede colgante
```

#### **Arrays dinámicos**
Podemos usar punteros para manejar arrays dinámicos. Sin embargo, su uso debe acompañarse de una gestión cuidadosa de la memoria.

```
int* array = new int[5]; // Reserva memoria para un array de 5 elementos
for (int i = 0; i < 5; ++i)
{
    array[i] = i + 1; // Inicializa el array con 1, 2, 3, 4, 5
}
delete[] array; // Libera la memoria reservada
array = nullptr;
```

---

### **4. Punteros a Punteros**
Un puntero puede almacenar la dirección de otro puntero. Esto se conoce como puntero a puntero.

```
int x = 5;
int* ptr = &x; // Puntero a x
int** ptr2 = &ptr; // Puntero a ptr
std::cout << "Valor de x usando ptr2: " << **ptr2 << std::endl;
```

---

## **Buenas Prácticas**

1. **Inicializa siempre los punteros**:
   - Usa `nullptr` si no tienes un valor inicial para evitar errores.

2. **Libera la memoria asignada dinámicamente**:
   - Cada `new` debe corresponder a un `delete`.

3. **Evita punteros colgantes**:
   - Asigna `nullptr` después de liberar la memoria.

4. **Usa referencias cuando sea posible**:
   - Las referencias son más seguras que los punteros en muchos casos.

5. **Documenta el uso de punteros**:
   - Asegúrate de que su propósito sea claro en el código.

---

## **Conclusión**

Los punteros y referencias son herramientas poderosas que ofrecen un control avanzado sobre la memoria y los datos en C++. Aunque son esenciales para aprovechar al máximo el potencial de C++, requieren un uso cuidadoso para evitar errores comunes. Este tema sienta las bases para trabajar con estructuras de datos dinámicas, optimización y manejo eficiente de recursos.

---

**Fin del tema 3**

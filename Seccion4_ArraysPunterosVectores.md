# Sección 4: Arrays, Punteros y Vectores en C++

## 1. Arrays en C++

Un **array** es una colección de elementos del mismo tipo que se almacenan en ubicaciones de memoria contiguas. En C++, los arrays tienen un tamaño fijo que debe definirse cuando se declara el array.

### Declaración de arrays:
Para declarar un array en C++, se utiliza el siguiente formato:
```
tipo nombre_array[tamaño];
```

### Ejemplo de declaración:
```
int numeros[5];
// Declara un array de enteros con 5 elementos
```

### Inicialización de arrays:
Un array se puede inicializar en el momento de la declaración:
```
int numeros[5] = {1, 2, 3, 4, 5};
```

Si no se inicializan todos los elementos, los elementos no inicializados tomarán valores predeterminados (0 en el caso de los enteros):
```
int numeros[5] = {1, 2};
// Los tres últimos elementos serán 0
```

### Acceso a los elementos del array:
Los elementos de un array se pueden acceder utilizando el índice. El índice comienza en 0.
```
std::cout << numeros[0];
// Imprime 1
```

### Recorrer un array con un bucle:
Es común recorrer los elementos de un array utilizando bucles, como `for` o `while`.
```
for (int i = 0; i < 5; ++i)
{
  std::cout << numeros[i] << std::endl;
}
```

---

## 2. Arrays multidimensionales

C++ permite la creación de arrays multidimensionales. Los arrays más comunes son los bidimensionales, que se usan para representar matrices.

### Declaración de un array bidimensional:
```
int matriz[3][3];
// Una matriz de 3x3 de enteros
```

### Inicialización de un array bidimensional:
```
int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
```


### Acceso a los elementos de un array bidimensional:
Los elementos se acceden proporcionando dos índices: uno para las filas y otro para las columnas.
```
std::cout << matriz[0][0];
// Imprime 1
```

---

## 3. Punteros y arrays

Un array en C++ es, en esencia, un puntero al primer elemento. Por eso, los arrays se pueden manejar a través de punteros.

### Acceder a elementos usando punteros:
```
int* puntero = numeros;
std::cout << *(puntero + 1);
// Imprime el segundo elemento del array (2)
```

---

## 4. Vectores de la STL (Standard Template Library)

Los arrays tienen limitaciones, como el tamaño fijo. Para solucionar esto, se utiliza la clase **vector** de la STL de C++, que es un array dinámico de tamaño variable.

### Declaración de un vector:
```
#include <vector>
std::vector<int> numeros;
```

### Agregar elementos a un vector:
```
numeros.push_back(10);
// Añade el número 10 al final del vector


### Recorrer un vector:
```
for (int i = 0; i < numeros.size(); ++i)
{
  std::cout << numeros[i] << std::endl;
}
```

### Eliminar elementos de un vector:
```
numeros.pop_back();
// Elimina el último elemento del vector
```

---

## 5. Diferencia entre `i++` y `++i`

### `i++` (Post-incremento):
- El post-incremento incrementa la variable **después** de que su valor haya sido usado.
- Devuelve el valor **anterior** de la variable y luego la incrementa.
```
int i = 5;
int j = i++;
// j toma el valor de i (5), luego i se incrementa a 6
```

### `++i` (Pre-incremento):
- El pre-incremento incrementa la variable **antes** de que su valor sea usado.
- Devuelve el valor **incrementado**.
```
int i = 5;
int j = ++i;
// i se incrementa a 6 y j toma el valor incrementado de i (6)
```

### Diferencias de rendimiento:
- **Pre-incremento (`++i`)**: Puede ser más eficiente en ciertos casos, como con iteradores de la STL.
- **Post-incremento (`i++`)**: Puede implicar una pequeña sobrecarga, ya que devuelve una copia del valor original.

En bucles `for`, normalmente no hay diferencia significativa entre usar `i++` y `++i`, pero se recomienda usar `++i` si no necesitas el valor anterior.

---

## Buenas prácticas en el uso de arrays y vectores

1. **Usar arrays cuando el tamaño es fijo**: Si sabes de antemano que el tamaño de los datos no va a cambiar, un array es la mejor opción.
2. **Usar vectores cuando el tamaño es dinámico**: Si el tamaño de los datos puede cambiar en tiempo de ejecución, usa un `std::vector` para manejar la redimensión automática.
3. **Preferir vectores por sus funcionalidades adicionales**: Los vectores proporcionan muchas funciones útiles, como `push_back()`, `pop_back()`, y `size()`, que facilitan el manejo dinámico de datos.
4. **Usar punteros con precaución**: Aunque los punteros pueden ser útiles, es más seguro usar vectores o arrays siempre que sea posible, para evitar errores de desbordamiento o acceso a memoria no válida.

---

**Fin de la Sección 4**


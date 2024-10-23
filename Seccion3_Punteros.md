# Sección 3: Punteros y Memoria Dinámica en C++

## ¿Qué es un puntero?

Un **puntero** es una variable que almacena la **dirección de memoria** de otra variable. En lugar de almacenar directamente un valor, el puntero guarda la ubicación en memoria de ese valor.

### Ejemplo básico de puntero:
```
int valor = 42; int* puntero = &valor;
// El puntero almacena la dirección de 'valor'
```

En este caso, `puntero` almacena la dirección de la variable `valor`. Para acceder al valor almacenado en esa dirección, usamos el operador de **desreferenciación** `*`.

### Desreferenciación:

Para acceder al valor apuntado por un puntero, usamos `*`.
```
std::cout << *puntero << std::endl;
// Imprime 42
```

---

## Punteros nulos y el puntero `nullptr`

Es importante que los punteros no apunten a direcciones de memoria no válidas. Un **puntero nulo** es un puntero que no apunta a ninguna dirección válida. En C++, se usa `nullptr` para representar un puntero nulo.

### Ejemplo de puntero nulo:
```
int* puntero = nullptr;
// El puntero no apunta a ningún lugar
```

Antes de desreferenciar un puntero, es recomendable comprobar que no sea nulo para evitar errores.

---

## Memoria Dinámica: Stack y Heap

En C++, hay dos lugares donde se puede almacenar la memoria: el **stack** y el **heap**.

### **Stack**:
- El **stack** es la memoria gestionada automáticamente por el programa.
- Las variables locales se almacenan en el stack.
- El espacio en el stack se libera automáticamente cuando las variables salen de su ámbito.

### **Heap**:
- El **heap** es la memoria que se asigna dinámicamente utilizando `new` y se debe liberar manualmente con `delete`.
- Es más flexible que el stack, pero también requiere más cuidado para evitar **fugas de memoria**.

### Ejemplo de asignación en el heap:
```
int* puntero = new int;
// Asigna memoria en el heap
*puntero = 10;
// Almacena el valor 10 en la memoria asignada
delete puntero;
// Libera la memoria del heap
```

---

## Punteros inteligentes en C++

Para manejar mejor la memoria y evitar fugas de memoria, C++ incluye los **punteros inteligentes**. Estos son punteros que gestionan automáticamente la asignación y liberación de memoria.

### `std::unique_ptr`

- El **`std::unique_ptr`** es un puntero inteligente que tiene propiedad **exclusiva** del objeto que apunta. Solo puede haber un `unique_ptr` apuntando a un objeto dado.
- Cuando el `unique_ptr` sale de su ámbito, automáticamente libera la memoria.

### Ejemplo de uso de `std::unique_ptr`:
```
std::unique_ptr<int> puntero = std::make_unique<int>(10);
std::cout << *puntero << std::endl;
// Imprime 10
// La memoria es liberada automáticamente al salir del ámbito
```

---

### `std::shared_ptr`

- El **`std::shared_ptr`** es un puntero inteligente que permite compartir la propiedad del objeto. Varios `shared_ptr` pueden apuntar al mismo objeto, y el objeto se destruye cuando el último `shared_ptr` que lo apunta desaparece.
- Utiliza un mecanismo de **conteo de referencias** para saber cuántos punteros están apuntando al mismo recurso.

### Ejemplo de uso de `std::shared_ptr`:
```
std::shared_ptr<int> puntero1 = std::make_shared<int>(10);
std::shared_ptr<int> puntero2 = puntero1;
// Comparte el recurso
std::cout << *puntero2 << std::endl;
// Imprime 10
// La memoria es liberada cuando ambos punteros dejan de existir
```

---

### `std::weak_ptr`

- El **`std::weak_ptr`** es un puntero que no participa en el conteo de referencias. Se utiliza para observar un recurso gestionado por un `shared_ptr` sin reclamar la propiedad de ese recurso.
- Es útil para evitar **ciclos de referencias**, donde dos objetos se referencian entre sí, lo que impide que la memoria sea liberada.

### Ejemplo de uso de `std::weak_ptr`:
```
std::shared_ptr<int> punteroCompartido = std::make_shared<int>(10);
std::weak_ptr<int> observador = punteroCompartido;

if (auto ptr = observador.lock())
{
  std::cout << "Recurso aún vivo" << std::endl;
}
else
{
  std::cout << "Recurso ha sido liberado" << std::endl;
}
```

---

## Comparación entre punteros inteligentes y punteros crudos

1. **Punteros crudos**:
   - Debes gestionar manualmente la memoria con `new` y `delete`.
   - Mayor riesgo de fugas de memoria si olvidas liberar la memoria.
   - Menos sobrecarga, pero más propenso a errores en programas grandes.

2. **Punteros inteligentes**:
   - Gestionan automáticamente la memoria.
   - Evitan las fugas de memoria.
   - Leves sobrecargas de tiempo de ejecución (especialmente con `shared_ptr` y su conteo de referencias).

---

## Buenas prácticas en el uso de punteros:

1. **Preferir punteros inteligentes**: Siempre que sea posible, utiliza punteros inteligentes (`unique_ptr`, `shared_ptr`, `weak_ptr`) en lugar de punteros crudos.
   
2. **Liberar la memoria**: Si usas punteros crudos, asegúrate de llamar a `delete` para liberar la memoria del heap cuando ya no la necesites. No liberar la memoria causará fugas.

3. **Comprobar punteros nulos**: Antes de desreferenciar un puntero, comprueba siempre si es nulo para evitar errores en tiempo de ejecución.

4. **Evitar ciclos de referencias con `shared_ptr`**: Si dos `shared_ptr` apuntan entre sí, crearán un ciclo de referencias y evitarán que la memoria se libere. Usa `weak_ptr` para romper estos ciclos.

---

**Fin de la Sección 3**

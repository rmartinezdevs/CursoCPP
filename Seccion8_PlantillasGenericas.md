# Sección 8: Programación Genérica en C++

La programación genérica en C++ permite escribir código que funcione con cualquier tipo de dato, eliminando la necesidad de duplicar funciones o clases para cada tipo. Esto se hace mediante **plantillas** (`templates`), que actúan como modelos reutilizables.

## 1. Conceptos Básicos: Plantillas de Función

### ¿Qué son las Plantillas de Función?
Las plantillas de función permiten definir una sola versión de una función para múltiples tipos de datos. Esto es útil cuando la operación es idéntica sin importar el tipo de datos.

### Cómo Declarar una Plantilla de Función
```
template <typename T> // "T" será el tipo genérico
T suma(T a, T b) {
    return a + b;
}
```

### Ejemplo de Uso de una Plantilla de Función
```
int resultadoInt = suma(5, 3);
double resultadoDouble = suma(2.5, 3.7);
```

## 2. Plantillas de Clase

Las plantillas de clase nos permiten crear clases genéricas para trabajar con diferentes tipos de datos.

### Ejemplo: Una Clase Caja
```
template <typename T>
class Caja {
private:
    T contenido;
public:
    Caja(T contenido) : contenido(contenido) {}
    
    T obtenerContenido() const {
        return contenido;
    }
};
```

### Uso de la Clase Plantilla
```
Caja<int> cajaEntero(42);
Caja<std::string> cajaTexto("Hola, C++");
```

## 3. Parámetros de Plantilla Múltiples

Permiten que una función o clase utilice más de un tipo genérico.

### Ejemplo: Clase Par con Múltiples Parámetros
```
template <typename T, typename U>
class Par {
private:
    T primero;
    U segundo;
public:
    Par(T primero, U segundo) : primero(primero), segundo(segundo) {}
    T obtenerPrimero() const { return primero; }
    U obtenerSegundo() const { return segundo; }
};
```

## 4. Deducción de Tipos vs. Especificación Explícita de Tipos

Es posible especificar explícitamente el tipo que se va a usar en una llamada de función genérica:
```
auto resultado = suma<int>(3.5, 2.2);
```

## 5. Especialización de Plantillas

Permite definir versiones específicas de una plantilla de clase o función para ciertos tipos de datos.

### Especialización de una Clase para `int`
```
template <>
class Caja<int> {
private:
    int contenido;
public:
    Caja(int contenido) : contenido(contenido) {}
    int obtenerContenido() const { return contenido * 2; }
};
```

## 6. Plantillas con Parámetros Constantes

Permite definir el tamaño de una estructura en tiempo de compilación.

### Ejemplo de Uso de Constantes en Plantillas
```
template <typename T, int SIZE>
class Array {
private:
    T datos[SIZE];
public:
    T& operator[](int index) { return datos[index]; }
};
```

## Ventajas y Consideraciones

- **Eficiencia**: Las plantillas son procesadas en tiempo de compilación.
- **Flexibilidad**: Facilita el trabajo con múltiples tipos.
- **Complejidad**: Los errores de plantillas pueden ser difíciles de interpretar.

## Buenas Prácticas

1. Usa nombres claros para los parámetros de tipo.
2. Modulariza el Código.
3. Evita el Uso Excesivo.
4. Documenta las plantillas.


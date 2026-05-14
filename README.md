*Este proyecto ha sido creado como parte del currículo de 42 por hfandino.*

# Libft

## Descripción

**Libft** es el primer proyecto del Common Core de 42. Consiste en recrear desde cero una librería estática en lenguaje C, reimplementando funciones de la `libc` con el prefijo `ft_`.

El objetivo principal es comprender cómo funcionan internamente muchas funciones estándar, además de desarrollar una base sólida en:

- Memoria dinámica y punteros
- Manipulación de strings y memoria
- Estructuras de datos dinámicas
- Modularidad y compilación con Makefile

La librería generada (`libft.a`) será reutilizada en múltiples proyectos posteriores del cursus de 42.

---

## Estructura del proyecto

```
libft/
├── Makefile
├── libft.h
├── ft_is*.c          # Validación de caracteres
├── ft_mem*.c         # Manipulación de memoria
├── ft_str*.c         # Manipulación de strings
├── ft_put*_fd.c      # Escritura sobre file descriptors
├── ft_lst*.c         # Listas enlazadas
└── libft.a           # Librería estática compilada
```

---

## Compilación

```bash
# Compilar la librería
make

# Eliminar archivos objeto
make clean

# Eliminar archivos objeto y librería
make fclean

# Recompilar completamente
make re
```

**Flags de compilación utilizados:**

```bash
cc -Wall -Wextra -Werror
```

---

## Funciones implementadas

### Parte 1 — Funciones de la libc

Reimplementación de funciones estándar con el prefijo `ft_`.

#### Validación de caracteres

| Función | Descripción |
|---|---|
| `ft_isalpha` | Comprueba si el carácter es alfabético |
| `ft_isdigit` | Comprueba si el carácter es un dígito |
| `ft_isalnum` | Comprueba si el carácter es alfanumérico |
| `ft_isascii` | Comprueba si el carácter pertenece al conjunto ASCII |
| `ft_isprint` | Comprueba si el carácter es imprimible |
| `ft_toupper` | Convierte un carácter a mayúscula |
| `ft_tolower` | Convierte un carácter a minúscula |

#### Manipulación de memoria

| Función | Descripción |
|---|---|
| `ft_memset` | Rellena un bloque de memoria con un valor |
| `ft_bzero` | Pone a cero un bloque de memoria |
| `ft_memcpy` | Copia un bloque de memoria |
| `ft_memmove` | Copia un bloque de memoria con solapamiento seguro |
| `ft_memchr` | Busca un byte en un bloque de memoria |
| `ft_memcmp` | Compara dos bloques de memoria |
| `ft_calloc` | Reserva memoria inicializada a cero |

#### Manipulación de strings

| Función | Descripción |
|---|---|
| `ft_strlen` | Calcula la longitud de una cadena |
| `ft_strlcpy` | Copia una cadena con límite de tamaño |
| `ft_strlcat` | Concatena dos cadenas con límite de tamaño |
| `ft_strchr` | Busca la primera aparición de un carácter |
| `ft_strrchr` | Busca la última aparición de un carácter |
| `ft_strncmp` | Compara dos cadenas hasta `n` caracteres |
| `ft_strnstr` | Busca una subcadena dentro de otra |
| `ft_strdup` | Duplica una cadena reservando memoria |
| `ft_atoi` | Convierte una cadena a entero |

---

### Parte 2 — Funciones adicionales

Funciones propias para ampliar funcionalidades comunes de strings y memoria dinámica.

| Función | Descripción |
|---|---|
| `ft_substr` | Extrae una subcadena de una cadena |
| `ft_strjoin` | Concatena dos cadenas en una nueva |
| `ft_strtrim` | Elimina caracteres del inicio y final de una cadena |
| `ft_split` | Divide una cadena en un array de subcadenas |
| `ft_itoa` | Convierte un entero a cadena |
| `ft_strmapi` | Aplica una función a cada carácter de una cadena |
| `ft_striteri` | Aplica una función a cada carácter (con índice) |
| `ft_putchar_fd` | Escribe un carácter en un file descriptor |
| `ft_putstr_fd` | Escribe una cadena en un file descriptor |
| `ft_putendl_fd` | Escribe una cadena seguida de `\n` en un file descriptor |
| `ft_putnbr_fd` | Escribe un entero en un file descriptor |

---

### Parte 3 — Listas enlazadas

Implementación de listas enlazadas simples mediante la siguiente estructura:

```c
typedef struct s_list
{
    void            *content;   // Puntero genérico al contenido
    struct s_list   *next;      // Puntero al siguiente nodo
}   t_list;
```

| Función | Descripción |
|---|---|
| `ft_lstnew` | Crea un nuevo nodo |
| `ft_lstadd_front` | Añade un nodo al inicio de la lista |
| `ft_lstadd_back` | Añade un nodo al final de la lista |
| `ft_lstsize` | Devuelve el número de nodos de la lista |
| `ft_lstlast` | Devuelve el último nodo de la lista |
| `ft_lstdelone` | Elimina un nodo aplicando una función de borrado |
| `ft_lstclear` | Elimina todos los nodos de la lista |
| `ft_lstiter` | Aplica una función a cada nodo de la lista |
| `ft_lstmap` | Crea una nueva lista aplicando una función a cada nodo |

---

## Recursos

### Documentación oficial

- [Linux Manual Pages](https://man7.org/linux/man-pages/)
- [GNU Make Documentation](https://www.gnu.org/software/make/manual/)
- [C Standard Library Reference](https://cplusplus.com/reference/clibrary/)
- [POSIX Documentation](https://pubs.opengroup.org/onlinepubs/9699919799/)

### Recursos de aprendizaje

- Documentación oficial de las funciones mediante `man`
- Material de apoyo sobre memoria dinámica y punteros
- Explicaciones y práctica sobre listas enlazadas
- Testing manual mediante archivos `main.c`

---

## Uso de IA

La IA fue utilizada como herramienta de apoyo para:

- Reforzar conceptos teóricos relacionados con memoria y punteros
- Comprender estructuras dinámicas como listas enlazadas
- Resolver dudas conceptuales sobre funciones y comportamiento de memoria
- Apoyar el proceso de debugging y razonamiento lógico
- Mejorar la comprensión de Makefiles y compilación

> Todo el código fue implementado, probado y adaptado manualmente durante el desarrollo del proyecto.

---


*Este proyecto ha sido creado como parte del currículo de 42 por hfandino.*

# Libft

## Descripción

Libft es el primer proyecto del Common Core de 42 y consiste en recrear desde cero una librería propia en lenguaje C.

El objetivo principal del proyecto es comprender cómo funcionan internamente muchas funciones estándar de la libc, además de desarrollar una base sólida sobre memoria dinámica, punteros, manipulación de memoria, estructuras de datos y modularidad.

El proyecto incluye la reimplementación de funciones estándar de la libc, funciones adicionales para manipulación de strings y memoria dinámica, así como una implementación de listas enlazadas simples mediante estructuras dinámicas.

La librería generada (`libft.a`) será reutilizada en múltiples proyectos posteriores del cursus de 42.

# Instrucciones

## Compilar la librería

```bash
make

##Eliminar archivos objeto

make clean

##Eliminar archivos objeto y libreria 

make fclean

##Recompilar completamente

make re

## Compilacion utilizada

Cada nodo contiene:

un puntero genérico al contenido
un puntero al siguiente nodo de la lista

Funciones implementadas:

ft_lstnew
ft_lstadd_front
ft_lstsize
ft_lstlast
ft_lstadd_back
ft_lstdelone
ft_lstclear
ft_lstiter
ft_lstmap

La librería fue diseñada para ser modular, reutilizable y compatible con futuros proyectos del cursus de 42.cc -Wall -Wextra -Werror

# Recursos

## Documentación

- Linux Manual Pages  
https://man7.org/linux/man-pages/

- GNU Make Documentation  
https://www.gnu.org/software/make/manual/

- C Standard Library Reference  
https://cplusplus.com/reference/clibrary/

- POSIX Documentation  
https://pubs.opengroup.org/onlinepubs/9699919799/

## Recursos de aprendizaje

- Documentación oficial de las funciones mediante `man`
- Material de apoyo sobre memoria dinámica y punteros
- Explicaciones y práctica sobre listas enlazadas
- Testing manual mediante archivos `main.c`

## Uso de IA

La IA fue utilizada como herramienta de apoyo para:
- reforzar conceptos teóricos relacionados con memoria y punteros
- comprender estructuras dinámicas como listas enlazadas
- resolver dudas conceptuales sobre funciones y comportamiento de memoria
- apoyar el proceso de debugging y razonamiento lógico
- mejorar la comprensión de Makefiles y compilación

Todo el código fue implementado, probado y adaptado manualmente durante el desarrollo del proyecto.

# Descripción de la Librería

La librería `libft.a` es una librería estática desarrollada en lenguaje C que reúne funciones reutilizables relacionadas con manipulación de memoria, strings, conversión de datos, escritura sobre file descriptors y estructuras dinámicas mediante listas enlazadas.

El proyecto está dividido en tres grandes partes:

## Parte 1 — Funciones de la libc

Reimplementación de funciones estándar de la libc con el prefijo `ft_`.

Funciones relacionadas con:
- validación de caracteres
- manipulación de memoria
- manipulación de strings
- comparación de memoria
- conversión de datos

Funciones implementadas:

```c
ft_isalpha
ft_isdigit
ft_isalnum
ft_isascii
ft_isprint
ft_strlen
ft_memset
ft_bzero
ft_memcpy
ft_memmove
ft_strlcpy
ft_strlcat
ft_toupper
ft_tolower
ft_strchr
ft_strrchr
ft_strncmp
ft_memchr
ft_memcmp
ft_strnstr
ft_atoi
ft_calloc
ft_strdupi

## Parte 2 — Funciones adicionales

Funciones desarrolladas para ampliar funcionalidades comunes relacionadas con strings y memoria dinámica.

```c
ft_substr
ft_strjoin
ft_strtrim
ft_split
ft_itoa
ft_strmapi
ft_striteri
ft_putchar_fd
ft_putstr_fd
ft_putendl_fd
ft_putnbr_fd

## Parte 3 — Listas enlazadas

Implementación de listas enlazadas simples utilizando la siguiente estructura:

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

Cada nodo contiene:

un puntero genérico al contenido
un puntero al siguiente nodo de la lista

Funciones implementadas:

ft_lstnew
ft_lstadd_front
ft_lstsize
ft_lstlast
ft_lstadd_back
ft_lstdelone
ft_lstclear
ft_lstiter
ft_lstmap

La librería fue diseñada para ser modular, reutilizable y compatible con futuros proyectos del cursus de 42.

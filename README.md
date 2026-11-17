*This project has been created as part of the 42 curriculum by mderbieh.*

# Libft

## Description

**Libft** is a custom C library developed as part of the 42 curriculum. The goal of this project is to recreate a collection of commonly used functions from the C standard library and to build additional utility functions for string manipulation, memory management, character classification, linked lists, and other common programming tasks.

The project is designed to strengthen fundamental C programming skills, including:

- Memory management and dynamic allocation
- Pointers and pointer manipulation
- String and memory operations
- File descriptors and low-level I/O
- Function pointers
- Structures and linked lists
- Defensive programming and error handling

The resulting `libft.a` static library can be included in other C projects and compiled with the project's source files.

## Library Contents

The library is divided into several groups of functions.

### Character Functions

Functions used to test or convert individual characters:

- `ft_isalpha` — checks whether a character is alphabetic.
- `ft_isdigit` — checks whether a character is a digit.
- `ft_isalnum` — checks whether a character is alphanumeric.
- `ft_isascii` — checks whether a character belongs to the ASCII character set.
- `ft_isprint` — checks whether a character is printable.
- `ft_toupper` — converts a lowercase character to uppercase.
- `ft_tolower` — converts an uppercase character to lowercase.

### String Functions

Functions for manipulating and inspecting null-terminated strings:

- `ft_strlen` — calculates the length of a string.
- `ft_strchr` — searches for the first occurrence of a character.
- `ft_strrchr` — searches for the last occurrence of a character.
- `ft_strncmp` — compares two strings up to a specified number of characters.
- `ft_strlcpy` — safely copies a string into a destination buffer.
- `ft_strlcat` — safely concatenates strings.
- `ft_strnstr` — searches for a substring within a string.
- `ft_strdup` — creates a dynamically allocated duplicate of a string.

### Memory Functions

Functions for manipulating raw memory:

- `ft_memset` — fills a memory area with a specified byte.
- `ft_bzero` — sets a memory area to zero.
- `ft_memcpy` — copies a block of memory.
- `ft_memmove` — copies memory while correctly handling overlapping regions.
- `ft_memchr` — searches for a byte within a memory block.
- `ft_memcmp` — compares two memory blocks.
- `ft_calloc` — allocates and initializes memory to zero.

### Conversion Functions

Functions for converting between strings and numeric values:

- `ft_atoi` — converts a string representation of an integer into an `int`.
- `ft_itoa` — converts an integer into a dynamically allocated string.

### String Manipulation Functions

Additional utilities for creating and manipulating strings:

- `ft_substr` — creates a substring from a string.
- `ft_strjoin` — concatenates two strings into a newly allocated string.
- `ft_strtrim` — removes specified characters from the beginning and end of a string.
- `ft_split` — splits a string into an array of strings using a delimiter.
- `ft_strmapi` — applies a function to every character and creates a new string.
- `ft_striteri` — applies a function to every character while allowing modification of the original string.

### File Descriptor Functions

Functions for writing strings and characters to a file descriptor:

- `ft_putchar_fd` — writes a character to a file descriptor.
- `ft_putstr_fd` — writes a string to a file descriptor.
- `ft_putendl_fd` — writes a string followed by a newline.
- `ft_putnbr_fd` — writes an integer to a file descriptor.

### Linked List Functions

The bonus part of the project provides utilities for manipulating singly linked lists using the `t_list` structure.

- `ft_lstnew` — creates a new list node.
- `ft_lstadd_front` — adds a node to the beginning of a list.
- `ft_lstsize` — returns the number of nodes in a list.
- `ft_lstlast` — returns the last node of a list.
- `ft_lstadd_back` — adds a node to the end of a list.
- `ft_lstdelone` — deletes one node and frees its content using a provided function.
- `ft_lstclear` — deletes and frees all nodes in a list.
- `ft_lstiter` — applies a function to every node's content.
- `ft_lstmap` — creates a new list by applying a function to each node's content.

## Instructions

### Requirements

A C compiler and `make` are required.

The project is designed and tested on a Unix/Linux environment.

### Compilation

Clone the repository and enter the project directory:

```bash
git clone <repository-url>
cd libft
```

Compile the library using:

```bash
make
```

This generates:

```text
libft.a
```

### Available Make Commands

```bash
make
```

Compiles the mandatory part of the library.

```bash
make bonus
```

Compiles the bonus linked-list functions.

```bash
make clean
```

Removes object files.

```bash
make fclean
```

Removes object files and the compiled library.

```bash
make re
```

Cleans the project and recompiles it.

### Using Libft in Another Project

Include the header:

```c
#include "libft.h"
```

Then compile your project together with the static library:

```bash
cc main.c -L. -lft
```

If `libft.a` is in the current directory, the `-L.` option tells the compiler where to find it and `-lft` links the library.

## Resources

### C Documentation

- `man 3` pages for standard C library functions.
- C language documentation and reference material.
- GNU C Library documentation.

### Useful References

- C standard library documentation for understanding the behavior of functions recreated in this project.
- 42's Libft project subject for the official requirements and constraints.
- Valgrind documentation for detecting invalid memory access, memory leaks, and uninitialized values.
- `make` documentation for understanding Makefiles and build automation.

### AI Usage

AI tools were used as a learning and debugging aid during the development of this project.

They were mainly used for:

- Explaining C concepts and standard library behavior.
- Understanding pointers, memory allocation, and pointer arithmetic.
- Analyzing compiler and Valgrind error messages.
- Helping identify bugs in function implementations.
- Understanding edge cases and expected behavior of functions.
- Reviewing implementations and suggesting areas to investigate when tests failed.

AI was **not used as a replacement for understanding or implementing the project requirements**. The code was written, tested, debugged, and validated as part of the development process.

## Technical Choices

The library is implemented in **C** and compiled into a static library (`libft.a`).

The implementation follows the restrictions and coding standards defined by the 42 curriculum, including:

- No external libraries beyond the permitted standard functionality.
- Dynamic memory is carefully managed where required.
- Functions are implemented according to their specified behavior.
- Memory leaks and invalid memory accesses are checked during development.
- The project follows the 42 Norm coding standard.

## Project Structure

A typical project structure is:

```text
libft/
├── Makefile
├── libft.h
├── ft_*.c
├── bonus/
│   ├── ft_lst*.c
│   └── ...
└── README.md
```

The mandatory functions implement character, string, memory, conversion, and file-descriptor utilities. The bonus section contains the linked-list implementation.

## Goal

The main objective of Libft is not only to recreate standard functions, but to build a reliable personal C library that can be reused throughout future 42 projects and to develop a strong understanding of low-level C programming and memory management.
*This project has been created as part of the 42 curriculum by Abdul Azeez Shabaneh(ashabane is my 42 school username).*

# Description
C programming can be quite tedious without the standard utilities we often take for granted. **Libft** is a foundational 42 project in which I reimplement a selection of essential C standard library functions from scratch.

The project explores the mechanics behind commonly used functions while strengthening my understanding of **memory management, string manipulation, pointers, data structures, and low-level programming in C**.

The result is a custom static library, `libft.a`, that provides a reusable toolkit for future projects throughout the 42 curriculum.

# Instructions

## Compilation

From the root of the repository, run:

    make

This will compile the source files and generate the "libft.a" static library.

## Using the library

Include the 'libft.h' header in your C source file:

    #include "libft.h"

Then compile your program and link it with 'libft.a':

    cc your_program.c libft.a -o your_program

Run the resulting executable:

    ./your_program

## Makefile commands

- 'make' — Compiles the library.
- 'make clean' — Removes object files.
- 'make fclean' — Removes object files and 'libft.a'.
- 'make re' — Rebuilds the library from scratch.

# Resources

The following resources were used to better understand the C standard library,
memory management, and the behavior of the functions implemented in this project:

- 'man' pages — Used as the primary reference for understanding the expected
  behavior and return values of standard C functions.
- [Markdown Guide](https://www.markdownguide.org/basic-syntax/) — help with structuring this file.
- [Stack Overflow - header](https://stackoverflow.com/questions/74677388/writing-the-header-file-of-my-own-library) — to understand the structure of header files.

## Visual Architecture & Flowcharts

To explore the low-level pointer logic, memory overlap diagrams, and algorithm breakdowns designed during the development of this project, you can view the interactive whiteboard here:

👉 [View Project Whiteboard](https://bauniversity-my.sharepoint.com/:wb:/g/personal/32401001033_std_bau_edu_jo/IQD9DD5Gvh8MT5DbAPLth9JVAVQJ3GCZRd9_bOzHPAOe6FQ?e=NOlWy2)


## Library Functions Overview

The library `libft.a` is composed of three main sections: standard C library re-implementations, additional utility functions for string and memory manipulation, and bonus linked list management functions.

---

### Part 1: Standard C Library Functions (Libc)
These functions re-implement standard C functions with identical behavior and prototypes, prefixed with `ft_`.

#### Character Classification & Conversion
* **`ft_isalpha`**: Checks if the character is an alphabetic character.
* **`ft_isdigit`**: Checks if the character is a digit (`0` through `9`).
* **`ft_isalnum`**: Checks if the character is alphanumeric.
* **`ft_isascii`**: Checks if the character belongs to the 7-bit ASCII set (`0` to `127`).
* **`ft_isprint`**: Checks if the character is printable (including space).
* **`ft_toupper`**: Converts a lowercase character to uppercase.
* **`ft_tolower`**: Converts an uppercase character to lowercase.

#### String Manipulation & Search
* **`ft_strlen`**: Computes the length of a string.
* **`ft_strchr`**: Locates the first occurrence of a character in a string.
* **`ft_strrchr`**: Locates the last occurrence of a character in a string.
* **`ft_strncmp`**: Compares two strings up to `n` bytes.
* **`ft_strlcpy`**: Copies a string to a destination buffer with size bounding and null-termination.
* **`ft_strlcat`**: Concatenates a string to a destination buffer with size bounding and null-termination.
* **`ft_strnstr`**: Locates a substring in a string, searching at most `len` characters.
* **`ft_atoi`**: Converts an ASCII string representation of an integer into an `int`.

#### Memory Management
* **`ft_memset`**: Fills a memory area with a constant byte.
* **`ft_bzero`**: Sets a byte string to zero (`'\0'`).
* **`ft_memcpy`**: Copies `n` bytes from source memory area to destination memory area (non-overlapping).
* **`ft_memmove`**: Copies `n` bytes from source to destination, handling overlapping memory regions safely.
* **`ft_memchr`**: Scans memory for the first instance of a character.
* **`ft_memcmp`**: Compares two memory areas byte by byte.
* **`ft_calloc`**: Allocates memory for an array and zeroes out all bytes.
* **`ft_strdup`**: Duplicates a string by allocating memory with `malloc`.

---

### Part 2: Additional Utility Functions
These functions are custom utilities designed for string manipulation, memory allocation, and file descriptor output.

#### String Allocation & Transformation
* **`ft_substr`**: Allocates and returns a substring from string `s`, starting at index `start` with max length `len`.
* **`ft_strjoin`**: Allocates and returns a new string resulting from concatenating `s1` and `s2`.
* **`ft_strtrim`**: Trims specified characters in `set` from the beginning and end of string `s1`.
* **`ft_split`**: Splits string `s` into an array of strings using delimiter `c`, allocating memory for both the array and each substring with robust error handling.
* **`ft_itoa`**: Converts an integer `n` into a null-terminated string, correctly handling negative values.
* **`ft_strmapi`**: Applies a function `f` to each character of string `s` (passing its index) to build and return a new string.
* **`ft_striteri`**: Applies a function `f` to each character of string `s` in place by passing its address and index.
#### File Descriptor Output
* **`ft_putchar_fd`**: Writes character `c` to the specified file descriptor `fd`.
* **`ft_putstr_fd`**: Writes string `s` to the specified file descriptor `fd`.
* **`ft_putendl_fd`**: Writes string `s` followed by a newline `\n` to file descriptor `fd`.
* **`ft_putnbr_fd`**: Writes integer `n` to the specified file descriptor `fd`.

---

### Part 3: Bonus Linked List Functions
A collection of functions to create and manipulate singly linked lists defined by the `t_list` structure.

* **`ft_lstnew`**: Allocates and returns a new node initialized with `content` and `next = NULL`.
* **`ft_lstadd_front`**: Adds a new node at the beginning of the list.
* **`ft_lstsize`**: Counts and returns the total number of nodes in the list.
* **`ft_lstlast`**: Returns a pointer to the last node in the list.
* **`ft_lstadd_back`**: Adds a new node at the end of the list.
* **`ft_lstdelone`**: Frees the memory of a single node's content using the `del` function, then frees the node itself.
* **`ft_lstclear`**: Frees a node and all of its successors using `del` and `free`, resetting the list head pointer to `NULL`.
* **`ft_lstiter`**: Iterates through the list and applies function `f` to the content of each node.
* **`ft_lstmap`**: Iterates through the list, applies function `f` to create a new list, handling

## AI Usage

AI was used as a learning and review tool during this project. In particular, it
was used to:

- Explain C concepts and clarify the behavior of functions when needed.
- Review code and help identify potential mistakes or edge cases.
- Explain Makefile concepts and dependency rules.
- Help improve the wording and structure of this README.

The implementation of the library functions was written and understood by me.

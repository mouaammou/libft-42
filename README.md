# Libft - 42 Project

[![Libft - 42 Project](https://img.shields.io/badge/Libft-42Project-blue)](https://www.42.fr/)

## Table of Contents

- [Introduction](#introduction)
- [Project Overview](#project-overview)
- [Features](#features)
- [Functions Implemented](#functions-implemented)
- [Installation](#installation)
- [Usage](#usage)
- [Testing](#testing)

## Introduction

Welcome to **Libft**, the first project of the 42 curriculum. The goal of this project is to create a C library that will mimic some of the standard C library functions and additional utility functions that will be used throughout the 42 projects.

## Project Overview

Libft is a custom implementation of several standard C library functions, including string manipulation, memory handling, and more. This project serves as a foundation for future C projects within the 42 curriculum. By writing these functions from scratch, students develop a deep understanding of how basic functions work under the hood.

## Features

- Custom implementation of several essential C standard library functions.
- Includes additional utility functions to facilitate development in future 42 projects.
- Adheres to strict C coding standards imposed by the 42 network (norminette compliant).

## Functions Implemented

Libft includes the following categories of functions:

### Part 1 - Libc Functions
- `ft_memset` - Fill memory with a constant byte
- `ft_bzero` - Zero out a byte string
- `ft_memcpy` - Copy memory area
- `ft_memmove` - Move memory area
- `ft_memchr` - Scan memory for a character
- `ft_memcmp` - Compare memory areas
- `ft_strlen` - Calculate the length of a string
- `ft_strdup` - Duplicate a string
- `ft_strcpy` - Copy a string
- `ft_strncpy` - Copy a string up to n characters
- `ft_strcat` - Concatenate two strings
- `ft_strncat` - Concatenate two strings, up to n characters
- `ft_strchr` - Locate character in string
- `ft_strrchr` - Locate character in string from the end
- ...and many more!

### Part 2 - Additional Functions
- `ft_substr` - Extract a substring from a string
- `ft_strjoin` - Concatenate two strings into a new one
- `ft_strtrim` - Trim leading and trailing characters from a string
- `ft_split` - Split a string into an array based on a delimiter
- `ft_itoa` - Convert an integer to a string
- `ft_putchar_fd` - Output a character to a file descriptor
- `ft_putstr_fd` - Output a string to a file descriptor
- `ft_putendl_fd` - Output a string to a file descriptor, followed by a newline
- `ft_putnbr_fd` - Output an integer to a file descriptor

### Bonus Part - Linked List Functions
- `ft_lstnew` - Create a new list node
- `ft_lstadd_front` - Add a node to the beginning of the list
- `ft_lstsize` - Count the number of nodes in a list
- `ft_lstlast` - Return the last node of the list
- `ft_lstadd_back` - Add a node to the end of the list
- `ft_lstdelone` - Delete a node and free its content
- `ft_lstclear` - Clear the entire list
- `ft_lstiter` - Apply a function to each node of the list
- `ft_lstmap` - Apply a function to each node and return a new list

## Installation

To use the library in your projects:

1. Clone the repository:
    ```bash
    git clone https://github.com/mouaammou/libft-42.git
    ```
2. Navigate into the project directory:
    ```bash
    cd libft
    ```
3. Compile the library:
    ```bash
    make
    ```

4. The compiled library will be available as `libft.a`.

## Usage

To use `libft` in your project, you need to include it during compilation:

1. Add the header file:
    ```c
    #include "libft.h"
    ```

2. Compile your project with `libft.a`:
    ```bash
    gcc -Wall -Wextra -Werror -o your_program your_program.c -L. -lft
    ```

### Example

```c
#include "libft.h"

int main(void)
{
    char str[] = "Hello, World!";
    ft_strrev(str);
    printf("%s\n", str); // Output: !dlroW ,olleH
    return 0;
}
```
## Testing
You can run tests with external testers or write your own to verify your implementation. Some popular testers include:

- `42FileChecker:` (https://github.com/jgigault/42FileChecker)
- `LibftTester:` https://github.com/Tripouille/libftTester
    To use these testers, follow their respective instructions on installation and running tests.

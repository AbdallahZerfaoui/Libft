# Libft - Your Custom C Standard Library

Welcome to **Libft**, a project where we build a custom implementation of some key functions from the C standard library, along with some additional utilities. This project is a great way to deepen your understanding of C programming, memory management, and fundamental algorithms.

## Table of Contents

- [Introduction](#introduction)
- [Features](#features)
- [Installation](#installation)
- [Usage](#usage)
- [Function List](#function-list)
- [Testing](#testing)
- [Project Structure](#project-structure)
- [Contributing](#contributing)
- [License](#license)

## Introduction

Libft is a project aimed at recreating essential C standard library functions. This library provides custom implementations of string manipulation, memory management, and list handling functions, among others. It serves as both a learning exercise and a useful set of utilities that you can include in your own C projects.

## Features

- **Memory management functions** like `ft_memset`, `ft_memcpy`, `ft_bzero`.
- **String manipulation functions** like `ft_strlen`, `ft_strcpy`, `ft_strdup`.
- **Character functions** like `ft_isalpha`, `ft_isdigit`, `ft_toupper`.
- **Conversion functions** like `ft_atoi`, `ft_itoa`.
- **Linked list utilities** like `ft_lstnew`, `ft_lstadd`, `ft_lstdel`.
- **Additional utility functions** for more complex operations like `ft_strsplit` and `ft_strjoin`.

## Installation

To use the library in your own projects, simply clone this repository and include the relevant files in your project.

```bash
git clone https://github.com/your-username/libft.git
cd libft
```
## Usage
include the libft.h header in your C source files:
```bash
#include "libft.h"
```
Link the compiled library when building your project:

````bash
gcc your_file.c -L. -lft -o your_program
````
## Function List
### Part 1 - Libc Functions
````bash
int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
int ft_strlen(const char *s);
void *ft_memset(void *s, int c, size_t n);
void ft_bzero(void *s, size_t n);
void *ft_memcpy(void *dst, const void *src, size_t n_bytes);
void *ft_memmove(void *dst, const void *src, size_t n_bytes);
size_t ft_strlcpy(char *dst, const char *src, size_t dst_size);
size_t ft_strlcat(char *dst, const char *src, size_t dst_size);
int ft_toupper(int c);
int ft_tolower(int c);
char *ft_strchr(const char *s, int c);
char *ft_strrchr(const char *s, int c);
int ft_strncmp(const char *s1, const char *s2, size_t n);
void *ft_memchr(const void *str, int c, size_t n);
int ft_memcmp(const void *block1, const void *block2, size_t n);
char *ft_strnstr(const char *haystack, const char *needle, size_t len);
int ft_atoi(const char *str);
void *ft_calloc(size_t nitems, size_t size);
char *ft_strdup(const char *s);
````
### Part 2 - Additional Functions
````bash
char *ft_substr(char const *s, unsigned int start, size_t len);
char *ft_strjoin(char const *s1, char const *s2);
char *ft_strtrim(char const *s1, char const *set);
char **ft_split(char const *s, char c);
char *ft_itoa(int value);
char *ft_strmapi(char const *s, char (*func)(unsigned int, char));
void ft_striteri(char *s, void (*func)(unsigned int, char*));
void ft_putchar_fd(char c, int fd);
void ft_putstr_fd(char *s, int fd);
void ft_putendl_fd(char *s, int fd);
void ft_putnbr_fd(int n, int fd);
````
### Part 3 - Bonus (Linked List Functions)
````bash
ft_lstnew
ft_lstdelone
ft_lstdel
ft_lstadd
ft_lstiter
ft_lstmap
````

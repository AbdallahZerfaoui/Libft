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

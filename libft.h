#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>

// Functions of libc

int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
int ft_strlen(const char *s);
void ft_bzero(void *s, size_t n);
void *ft_memset(void *s, int c, size_t n);

char *ft_strchr(const char *s, int c);
char *ft_strrchr(const char *s, int c);
int ft_strncmp(const char *s1, const char *s2, size_t n);

char *ft_strnstr(const char *haystack, const char *needle, size_t len);
int ft_atoi(const char *str);

char *ft_strdup(const char *s);

// Supplementary functions
char *ft_itoa(int value);

void ft_putchar_fd(char c, int fd);
void ft_putstr_fd(char *s, int fd);
void ft_putnbr_fd(int n, int fd);

// My extra functions
char *ft_strcpy(char *dst, const char *src);
int ft_strcmp(const char *s1, const char *s2);
char *ft_strstr(const char *haystack, const char *needle);

#endif
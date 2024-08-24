#include <unistd.h>

char *ft_itoa(int value, char *buffer, int base)
{
    char *ptr;
    char *ptr1;
    char *ptr2;
    unsigned long nbr;

    ptr = buffer;
    if (base < 2 || base > 36)
    {
        *ptr = '\0';
        return (ptr);
    }
    if (base != 10 && value < 0)
        value = -value;
    nbr = value;
    ptr1 = ptr;
    do
    {
        *ptr++ = "zyxwvutsrqponmlkjihgfedcba9876543210123456789abcdefghijklmnopqrstuvwxyz"[35 + nbr % base];
        nbr /= base;
    } while (nbr);
    if (value < 0 && base == 10)
        *ptr++ = '-';
    *ptr-- = '\0';
    ptr2 = ptr;
    while (ptr1 < ptr2)
    {
        char tmp;
        tmp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = tmp;
        ptr1++;
        ptr2--;
    }
    return (buffer);
}
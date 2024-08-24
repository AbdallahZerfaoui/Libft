#include <unistd.h>
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
    char	*ptr;
    size_t	size;

    size = 0;
    while (s[size])
        size++;
    ptr = (char *)malloc(size + 1);
    if (!ptr)
        return (NULL);
    size = 0;
    while (s[size])
    {
        ptr[size] = s[size];
        size++;
    }
    ptr[size] = '\0';
    return (ptr);
}
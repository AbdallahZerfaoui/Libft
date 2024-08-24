#include <unistd.h>

char *ft_strstr(const char *haystack, const char *needle)
{
    size_t i;
    size_t j;

    i = 0;
    if (needle[0] == '\0')
        return ((char *)haystack);
    while (haystack[i] != '\0')
    {
        j = 0;
        while (haystack[i + j] == needle[j] && needle[j] != '\0')
            j++;
        if (needle[j] == '\0')
            return ((char *)&haystack[i]);
        i++;
    }
    return (NULL);
}
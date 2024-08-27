#include <unistd.h>

// The strlcat() function appends the NUL-terminated 
// string src to the end of dst.

size_t ft_strlcat(char *dst, const char *src, size_t dst_size)
{
    size_t i;
    size_t dst_len;
    size_t src_len;

    dst_len = 0;
    while (dst[dst_len] && dst_len < dst_size)
        dst_len++;
    src_len = 0;
    while (src[src_len])
        src_len++;
    i = 0;
    while (src[i] && dst_len + i + 1 < dst_size)
    {
        dst[dst_len + i] = src[i];
        i++;
    }
    if (dst_len < dst_size)
        dst[dst_len + i] = '\0';
    return (dst_len + src_len);
}
#include <unistd.h>

int	ft_isalpha(int c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return (1);
    return (0);
}

#include <limits.h>
#include <stdio.h>
int main(){
    printf("%d\n", ft_isalpha(INT_MAX));
}




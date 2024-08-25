#include <unistd.h>

int ft_atoi(const char *str)
{
    int res = 0;
    int sign = 1;
    int i = 0;
    while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
        i++;
    if (str[i] == '-' || str[i] == '+')
        sign = 1 - 2 * (str[i++] == '-');
    while (str[i] >= '0' && str[i] <= '9')
        res = res * 10 + str[i++] - '0';
    return (res * sign);
}
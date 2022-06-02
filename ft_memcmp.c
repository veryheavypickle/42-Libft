#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t				i;
    const unsigned char	*str1;
    const unsigned char	*str2;

    i = 0;
    str1 = s1;
    str2 = s2;
    while (n--)
    {
        if (str1[i] != str2[i])
            return (str1[i] - str2[i]);
        i++;
    }
    return (0);
}
#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
    size_t i;

    if (!b)
        return (NULL);
    i = 0;
    while (i < len)
    {
        *(char*)(b + i) = (char)c;
        i++;
    }
    return (b);
}

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
    char    *d;
    char	*s;

    d = (char *)dst;
    s = (char *)src;
    if (d < s)
        return (ft_memcpy(dst, src, len));
    else
    {
        while (len--)
            *(d + len) = *(s + len);
    }
    return (dst);
}

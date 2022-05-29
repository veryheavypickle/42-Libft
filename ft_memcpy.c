#include "libft.h"

void	*ft_memcpy(void *dest_any, const void *src_any, size_t size)
{
    char *dest;
    char *src;

    dest = (char *)dest_any;
    src = (char *)src_any;
    while (size--)
        dest[size] = src[size];
    return (dest);
}
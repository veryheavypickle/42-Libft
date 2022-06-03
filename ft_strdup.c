#include "libft.h"

char	*ft_strdup(const char *str)
{
    char *cpy;
    size_t len;

    len = ft_strlen(str);
    cpy = (char *)malloc(sizeof(char) * ft_strlen(str) + 1);
    return (ft_memcpy(cpy, str, len + 1));
}
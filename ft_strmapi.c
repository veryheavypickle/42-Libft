#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
    char			*str;
    unsigned int	i;

    if (!s || !f)
        return (NULL);
    str = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
    if (!str)
        return (NULL);
    i = 0;
    while (s[i])
    {
        str[i] = f(i, s[i]);
        i++;
    }
    str[i] = '\0';
    return (str);
}
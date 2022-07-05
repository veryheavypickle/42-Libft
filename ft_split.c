#include "libft.h"

/*
 * s:  The string to be split.
 * c:  The delimiter character.
 *
 * string_count:
 * Is the number of individual strings that need to be created
 * This is the same as the number of instances of 'c' within 's' + 1
 *
 * This function calculates the num of strings that need to be returned
 * count is always +1 as there will always be at least one string.
 */
static	size_t ft_string_count(char const *s, char c)
{
	size_t i;
	size_t count;

	i = 0;
	count = 1;
	while (s[i])
	{
		if (s[i] == c)
			count++;
		i++;
	}
	return (count);
}

/*
 * Aight, so the plan is to iterate through 's'
 * Everytime 'c' is found in 's', a new string is created
 */
char **ft_split(char const *s, char c)
{

	char	**strings;
	char	*current_string;
	int 	string_count;
	int 	i;
	int 	current_string_size;

	if (!s)
		return (NULL);
	string_count = ft_string_count(s, c);
	strings = (char **)malloc(sizeof(char *) * string_count + 1);
	i = 0;
	current_string = (char *)s;
	while (i < string_count)
	{
		current_string_size = (int)(ft_strchr(current_string, c) - current_string);
		strings[i] = (char *)malloc(sizeof(char) * current_string_size + 1);
		while (current_string_size > 0)
		{
			strings[i][current_string_size] = current_string[current_string_size];
			current_string_size--;
		}
		i++;
	}
	return (strings);
}

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

/*
static	size_t ft_string_count(char const *s, char c)
{
	size_t i;
	size_t count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c)
			count++;
		i++;
	}
	return (count);
}
*/

/*
 * Aight, so the plan is to iterate through 's'
 * Everytime 'c' is found in 's', a new string is created
 */

/*
char **ft_split1(char const *s, char c)
{

	char	**strings;
	char	*current_string;
	int 	string_count;
	int 	i;
	int 	current_string_size;

	string_count = (int)ft_string_count(s, c);
	strings = (char **)malloc(sizeof(char *) * string_count + 1);
	if (!strings || !s)
		return (NULL);
	i = 0;
	current_string = (char *)s;
	while (i < string_count)
	{
		current_string_size = (int)(ft_strchr(current_string, c) - current_string);
		printf("\n%i", current_string_size);
		strings[i] = (char *)malloc(sizeof(char) * current_string_size + 1);
		while (current_string_size > 0)
		{
			strings[i][current_string_size] = current_string[current_string_size];
			current_string_size--;
			//printf("test\n");
		}
		printf("%i\n", current_string_size);
		//printf("%i\n", (int)strings[i][0]);
		i++;
	}
	return (strings);
}
 */

/*
 * 'strings' is the 2d array to return
 * 'str' is a copy of 's'
 * 'size' is the length of 's'
 *
 *
 * strings = (char **)malloc(sizeof(char *) * (int)ft_string_count(s, c) + 1);
 * As norminette sucks ass for comments i will copy this whole line and paste it again just to explain wtf is going on
 * strings is a 2d array with a length of the number of characters 'c' found in 's' + 1
 */

/*
static void ft_yes(size_t size, char *str, char c, char **strings, size_t string_count)
{
	size_t	i;

	i = 0;
	while (i < string_count)
	{
		if (str[i] == c)
		{
			str[i] = 0;

		}
	}
}

char **ft_split(char const *s, char c)
{
	char *str;
	char **strings;
	size_t string_count;
	size_t size;

	string_count = ft_string_count(s, c);
	strings = (char **)malloc(sizeof(char *) * (int)string_count + 1);
	if (!strings || !s)
		return (NULL);
	str = ft_strdup(s); // I FORGOR 💀 TO FREE
	size = ft_strlen(s);
	ft_yes(size, str, c, strings, string_count);
	return (strings);
}
 */

static size_t	ft_count_words(const char *s, char c)
{
	size_t	count;
	int		state;

	count = 0;
	state = 0;
	while (*s)
	{
		if (*s == c)
			state = 0;
		else if (state == 0)
		{
			state = 1;
			count++;
		}
		s++;
	}
	return (count);
}

static char	*ft_get_word(char const *s, char c)
{
	size_t	i;
	size_t	len;
	char	*word;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static char	*ft_set_word(int i, char const *s, char c, char **result)
{
	result[i] = ft_get_word(s, c);
	if (!result[i])
	{
		while (i > 0)
		{
			i--;
			free(result[i]);
		}
		free(result);
		return (NULL);
	}
	return (result[i]);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	words;
	size_t	i;

	if (!s)
		return (NULL);
	i = 0;
	words = ft_count_words(s, c);
	result = (char **)malloc(sizeof(char *) * (words + 1));
	if (!result)
		return (NULL);
	while (i < words)
	{
		while (*s == c)
			s++;
		if (*s)
			result[i] = ft_set_word(i, s, c, result);
		while (*s && *s != c)
			s++;
		i++;
	}
	result[i] = 0;
	return (result);
}
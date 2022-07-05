/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xcarroll <xcarroll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 20:10:13 by xcarroll          #+#    #+#             */
/*   Updated: 2022/07/05 20:10:32 by xcarroll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * There are lots of similar variable names here so imma try explain it
 * I have about 5 hours of memory, so this helps me remember what
 * the hell I wrote
 *
 * len: is the maximum allowed length of the substring to be returned 'sub'.
 * len_s: is the length of string 's'
 * len_sub: is the actual length of string to be returned 'sub'
 * sub: is the pointer for the string to be returned
 *
 * if (len_s < start) {...}
 * means if the size of string 's' is smaller than the index 'start'
 * then the string to return will just be ['\0']
 */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	size_t			len_s;
	size_t			len_sub;
	char			*sub;

	if (!s)
		return (NULL);
	i = 0;
	len_s = ft_strlen(s);
	len_sub = ft_strlen(s + start);
	if (len_s < start)
		len = 0;
	else if (len_sub < len)
		len = len_sub;
	sub = (char *)malloc(sizeof(char) * len + 1);
	if (!sub)
		return (NULL);
	while (len--)
		sub[i++] = s[start++];
	sub[i] = 0;
	return (sub);
}

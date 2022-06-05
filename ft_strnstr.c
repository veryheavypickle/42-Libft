/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xcarroll <xcarroll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 22:00:52 by xcarroll          #+#    #+#             */
/*   Updated: 2022/06/05 16:37:11 by xcarroll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
due to me not wanting to offend norminette (for a line too long)
I changed the good name I had for variable t from 'whole_text'
t - whole text pointer
*/
char	*ft_strnstr(const char *str, const char *to_find, size_t max)
{
	size_t	i;
	size_t	j;
	size_t	len_str;
	char	*t;

	i = 0;
	j = 0;
	len_str = ft_strlen(to_find);
	t = (char *)str;
	if (to_find[j] == '\0')
		return (t);
	while (t[i] != '\0')
	{
		j = 0;
		while (t[i + j] && to_find[j] && t[i + j] == to_find[j] && i + j < max)
			j++;
		if (j == len_str)
			return (t + i);
		i++;
	}
	return (0);
}

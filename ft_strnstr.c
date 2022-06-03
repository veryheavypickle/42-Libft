/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xcarroll <xcarroll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 22:00:52 by xcarroll          #+#    #+#             */
/*   Updated: 2022/06/03 21:20:53 by xcarroll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t max)
{
	size_t	i;
	size_t	j;
	size_t	len_str;
	char	*whole_text;

	i = 0;
	j = 0;
	len_str = ft_strlen(to_find);
	whole_text = (char *)str;
	if (to_find[j] == '\0')
		return (whole_text);
	while (whole_text[i] != '\0')
	{
		j = 0;
		while (whole_text[i + j] != '\0' && to_find[j] != '\0' && whole_text[i + j] == to_find[j] && i + j < max)
			j++;
		if (j == len_str)
			return (whole_text + i);
        i++;
    }
    return (0);
}

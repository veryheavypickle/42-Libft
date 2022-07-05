/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xcarroll <xcarroll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 21:24:26 by xcarroll          #+#    #+#             */
/*   Updated: 2022/07/05 20:31:34 by xcarroll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* does not pass last test of libftTester*/

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*p;
	size_t			i;

	p = malloc(count * size);
	if (p && (size <= UINT_MAX || count <= UINT_MAX))
	{
		i = 0;
		while (i < count * size)
			*(p + i++) = '\0';
		return (p);
	}
	return (NULL);
}

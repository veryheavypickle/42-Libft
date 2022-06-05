/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xcarroll <xcarroll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 15:51:22 by xcarroll          #+#    #+#             */
/*   Updated: 2022/06/05 16:44:03 by xcarroll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest_any, const void *src_any, size_t size)
{
	char	*dest;
	char	*src;

	dest = (char *)dest_any;
	src = (char *)src_any;
	while (size--)
		dest[size] = src[size];
	return (dest);
}

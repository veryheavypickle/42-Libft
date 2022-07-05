/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xcarroll <xcarroll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 15:48:08 by xcarroll          #+#    #+#             */
/*   Updated: 2022/07/05 20:24:27 by xcarroll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char	*dst;
	char	*s;

	dst = (char *)dest;
	s = (char *)src;
	if (s < dst)
	{
		while (len--)
				*(dst + len) = *(s + len);
		return (dest);
	}
	else
		return (ft_memcpy(dest, src, len));
}

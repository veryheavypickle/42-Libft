/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xcarroll <xcarroll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 05:28:58 by xcarroll          #+#    #+#             */
/*   Updated: 2022/05/02 21:10:29 by xcarroll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	d_len;
	unsigned int	s_len;

	i = 0;
	d_len = ft_strlen(dest);
	j = d_len - 1;
	s_len = ft_strlen(src);
	if (size == 0 || size <= d_len)
		return (s_len + size);
	while (src[i] != '\0' && i < size - d_len - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (d_len + s_len);
}
*/

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	slen;
	size_t	dlen;

	dlen = ft_strlen(dst);
	slen = ft_strlen((char *)src);
	i = 0;
	j = dlen;
	if (size <= dlen)
		return (slen + size);
	while (src[i] && i < size - dlen - 1)
		dst[j++] = src[i++];
	dst[j] = '\0';
	return (dlen + slen);
}

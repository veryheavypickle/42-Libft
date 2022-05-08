/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xcarroll <xcarroll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 05:28:58 by xcarroll          #+#    #+#             */
/*   Updated: 2022/05/08 20:34:13 by xcarroll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i_src;
	size_t	i_dest;
	size_t	d_len;
	size_t	s_len;

	d_len = ft_strlen(dest);
	s_len = ft_strlen((char *)src);
	i_dest = d_len - 1;
	i_src = 0;
	if (size <= d_len)
		return (s_len + size);
	while (src[i_src] && i_src < size - d_len - 1)
	{
		dest[i_dest++] = src[i_src++];
	}
	return (d_len + s_len);
}

/*
size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	slen;
	size_t	dlen;

	dlen = ft_strlen(dest);
	slen = ft_strlen((char *)src);
	i = 0;
	j = dlen - 1;
	if (size <= dlen)
		return (slen + size);
	while (src[i] && i < size - dlen - 1)
		dest[j++] = src[i++];
	dest[j] = '\0';
	return (dlen + slen);
}
*/
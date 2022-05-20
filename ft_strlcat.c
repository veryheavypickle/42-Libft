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

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t len_dest;
    size_t len;
    size_t i_src;
    size_t i_dest;

    len_dest = ft_strlen(dst);
    if (size <= len_dest)
        len = size;
    else
        len = len_dest;
    len += ft_strlen(src);
    if (size > len_dest)
    {
        i_dest = len_dest;
        i_src = 0;
        while (src[i_src] && i_src < size - len_dest - 1)
            dst[i_dest++] = src[i_src++];
        dst[i_dest] = '\0';
    }
    return (len);
}
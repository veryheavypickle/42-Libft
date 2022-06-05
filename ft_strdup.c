/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xcarroll <xcarroll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 15:52:34 by xcarroll          #+#    #+#             */
/*   Updated: 2022/06/05 15:52:54 by xcarroll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*cpy;
	size_t	len;

	len = ft_strlen(str);
	cpy = (char *)malloc(sizeof(char) * ft_strlen(str) + 1);
	return (ft_memcpy(cpy, str, len + 1));
}

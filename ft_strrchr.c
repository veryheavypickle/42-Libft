/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xcarroll <xcarroll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 16:21:58 by xcarroll          #+#    #+#             */
/*   Updated: 2022/06/05 16:31:59 by xcarroll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		size;
	char	chr;

	size = (int)ft_strlen(s);
	chr = (char)c;
	while (size >= 0)
	{
		if (s[size] == chr)
			return ((char *)(s + size));
		size--;
	}
	return (NULL);
}

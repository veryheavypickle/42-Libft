/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xcarroll <xcarroll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 16:49:04 by xcarroll          #+#    #+#             */
/*   Updated: 2022/05/02 17:01:44 by xcarroll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	char_to_int(char c)
{
	if ft_isdigit(c)
		return (c -= '0');
	return (0);
}

int	ft_atoi(char *str)
{
	int	index;
	int	len;
	int	num;

	len = ft_strlen(str);
	index = len;
	while (index != 0)
	{
		num += char_to_int(str[index]);
		index--;
	}
	return (num);
}

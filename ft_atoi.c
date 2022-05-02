/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xcarroll <xcarroll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 16:49:04 by xcarroll          #+#    #+#             */
/*   Updated: 2022/05/02 19:44:28 by xcarroll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_pow(int base, int exponent)
{
	int	result;
	int	index;

	if (!exponent)
		return (1);
	result = base;
	index = 1;
	while (index < exponent)
	{
		result *= base;
		index++;
	}
	return (result);
}

static int	ft_char_to_int(char c)
{
	if (ft_isdigit(c))
		return (c -= '0');
	return (0);
}

int	ft_atoi(char *str)
{
	int	index;
	int	len;
	int	num;

	num = 0;
	len = ft_strlen(str);
	index = 0;
	while (index < len)
	{
		num += ft_char_to_int(str[index]) * ft_pow(10, len - index - 1);
		index++;
	}
	return (num);
}

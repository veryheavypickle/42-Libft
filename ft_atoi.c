/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xcarroll <xcarroll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 16:49:04 by xcarroll          #+#    #+#             */
/*   Updated: 2022/07/05 20:33:38 by xcarroll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
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
*/

static int	is_whitespace(int c)
{
	return (c == ' ' || (c >= '\t' && c <= '\r'));
}

int	ft_atoi(const char *nptr)
{
	long int	num;
	int			sign;

	num = 0;
	sign = 1;
	while (is_whitespace(*nptr))
		nptr++;
	if (*nptr == '-')
		sign *= -1;
	if (*nptr == '-' || *nptr == '+')
		nptr++;
	while (ft_isdigit(*nptr))
	{
		num = num * 10 + *nptr - '0';
		if (num * sign < INT_MIN)
			return (0);
		else if (num * sign > INT_MAX)
			return (-1);
		nptr++;
	}
	return (num * sign);
}

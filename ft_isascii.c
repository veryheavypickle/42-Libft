/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xcarroll <xcarroll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 01:24:10 by xcarroll          #+#    #+#             */
/*   Updated: 2022/05/01 01:25:21 by xcarroll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* This boy returns true if the inputted char is an alphabet character */
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

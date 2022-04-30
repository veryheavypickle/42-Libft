/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xcarroll <xcarroll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 01:21:46 by xcarroll          #+#    #+#             */
/*   Updated: 2022/05/01 01:22:34 by xcarroll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* This boy returns true if the inputted char is an alphanumeric */
int	ft_isalnum(int c)
{
	return (ft_isalpha(c) && ft_isdigit(c));
}

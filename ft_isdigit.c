/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xcarroll <xcarroll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 23:19:17 by xcarroll          #+#    #+#             */
/*   Updated: 2022/05/01 01:29:26 by xcarroll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/*
void	test_isdigit(void)
{
	int	c;

	c = -1000;
	while (c < 1000)
	{
		if (isdigit(c) != ft_isdigit(c))
		{
			printf("Char: %c\n", c);
			printf("isalpha: %i\n", isdigit(c));
			printf("ft_isalpha: %i\n\n", ft_isdigit(c));
		}
		c++;
	}
}
*/

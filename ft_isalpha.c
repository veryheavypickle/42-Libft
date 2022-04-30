/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xcarroll <xcarroll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 20:46:57 by xcarroll          #+#    #+#             */
/*   Updated: 2022/05/01 01:29:19 by xcarroll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

/*
void	test_isalpha(void)
{
	int	c;

	c = 0;
	while (c < 128)
	{
		if (isalpha(c) != ft_isalpha(c))
		{
			printf("Char: %c\n", c);
			printf("isalpha: %i\n", isalpha(c));
			printf("ft_isalpha: %i\n\n", ft_isalpha(c));
		}
		c++;
	}
}
*/
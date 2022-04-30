/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xcarroll <xcarroll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 22:34:36 by xcarroll          #+#    #+#             */
/*   Updated: 2022/04/30 23:08:21 by xcarroll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	test_isalpha();
	return (0);
}

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

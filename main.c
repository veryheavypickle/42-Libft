/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xcarroll <xcarroll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 22:34:36 by xcarroll          #+#    #+#             */
/*   Updated: 2022/06/05 21:07:43 by xcarroll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void print2d(char **arr)
{
	int i;

	i = 0;
	while (arr[i])
	{
		printf("%s\n", arr[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	printf("ignore me: %i\n\n", ft_atoi(argv[argc - 1]));
	//printf("atoi: %i\n", atoi(argv[argc - 1]));
	char *str;
	char c;

	str = "HelloHelloHello";
	c = 'H';
	print2d(ft_split(str, c));
	return (0);
}

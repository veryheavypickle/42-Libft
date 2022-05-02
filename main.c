/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xcarroll <xcarroll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 22:34:36 by xcarroll          #+#    #+#             */
/*   Updated: 2022/05/02 19:32:55 by xcarroll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(int argc, char **argv)
{
	printf("mine: %i\n", ft_atoi(argv[argc - 1]));
	printf("atoi: %i\n", atoi(argv[argc - 1]));
	return (0);
}

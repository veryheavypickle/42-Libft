/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xcarroll <xcarroll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 20:43:56 by xcarroll          #+#    #+#             */
/*   Updated: 2022/05/01 01:18:53 by xcarroll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <ctype.h>
# include <stdio.h>

/* main.c */

/* ft_isalpha.c */
int		ft_isalpha(int c);
void	test_isalpha(void);

/* ft_digit.c */
int		ft_isdigit(int c);
void	test_isdigit(void);
#endif
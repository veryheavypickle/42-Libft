/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xcarroll <xcarroll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 20:43:56 by xcarroll          #+#    #+#             */
/*   Updated: 2022/05/08 22:03:34 by xcarroll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdio.h>
# include <stdlib.h>

/* Part 1 */
int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
int				ft_strlen(char *str);
/* memset */
/* bzero */
/* memcpy */
/* memmove */
/* unsigned int	ft_strlcat(char *dest, char *src, unsigned int size); */
size_t			ft_strlcat(char *dest, const char *src, size_t size);
int				ft_toupper(int c);
int				ft_tolower(int c);
/* strchr */
/* strrchr */
int				ft_strncmp(char *s1, char *s2, unsigned int n);
/* memchr */
/* memcmp */
char			*ft_strnstr(char *str, char *to_find, size_t max);
int				ft_atoi(char *str);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xcarroll <xcarroll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 20:43:56 by xcarroll          #+#    #+#             */
/*   Updated: 2022/05/01 10:12:13 by xcarroll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

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
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
int				ft_toupper(int c);
char			*ft_tolower(char *str);
/* strchr */
/* strrchr */
int				ft_strncmp(char *s1, char *s2, unsigned int n);
/* memchr */
/* memcmp */
/* strnstr */
/* atoi */

#endif
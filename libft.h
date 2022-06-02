/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xcarroll <xcarroll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 20:43:56 by xcarroll          #+#    #+#             */
/*   Updated: 2022/05/13 20:53:07 by xcarroll         ###   ########.fr       */
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
size_t	        ft_strlen(const char *s);
void            *ft_memset(void *b, int c, size_t len);
void            ft_bzero(void *s, size_t n);
void            *ft_memmove(void *dst, const void *src, size_t len);
size_t			ft_strlcat(char *dest, const char *src, size_t size);
size_t	        ft_strlcpy(char *dst, const char *src, size_t size);
int				ft_toupper(int c);
int				ft_tolower(int c);
/* ft_strchr */
/* ft_strrchr */
int				ft_strncmp(char *s1, char *s2, size_t n);
/* ft_memchr */
/* ft_memcmp */
char	        *ft_strnstr(const char *str, const char *to_find, size_t max);
int				ft_atoi(const char *str);
/* my malloc boys U+1F60E */
void	        *ft_memcpy(void *dest_any, const void *src_any, size_t size);
char	        *ft_strdup(const char *str);
#endif
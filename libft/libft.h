/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtegano <gtegano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 13:43:43 by gtegano           #+#    #+#             */
/*   Updated: 2023/01/18 14:58:19 by gtegano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# define FT_INT_MIN -2147483648
# define FT_INT_MAX 2147483647

# include <stdlib.h> 
# include <stdio.h>
# include <string.h>

typedef struct slist
{
	void			*content;
	struct slist	*next;
}					t_list;

size_t	ft_strlen(const char *str);
size_t	ft_strlcpy(char *dest, char *src, unsigned int size);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memmove(void *dest, const void	*src, size_t n);
char	*ft_strchr(const char	*s, int c);
char	*ft_sturdup(const char *s);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
char	*ft_strnstr(const char *h, const char *n, size_t len);
char	*ft_strrchr(const char *s, int c);
char	*ft_strstr(const	char *h, const	char *n);
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_atoi(char	*str);

#endif
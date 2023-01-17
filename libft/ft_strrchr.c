
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtegano <gtegano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 16:32:38 by gtegano           #+#    #+#             */
/*   Updated: 2023/01/17 16:32:38 by gtegano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char    *ft_strrchr(const char *s, int c)
{
    const char *str;

    str = s;
    while (*s)
        s++;
    while (s >= str)
        if (*s-- == (char)c)
            return ((char *)s + 1);
    return (NULL);         
} 
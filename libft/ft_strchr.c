
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtegano <gtegano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 16:30:15 by gtegano           #+#    #+#             */
/*   Updated: 2023/01/17 16:30:15 by gtegano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char    *ft_strchr(const char *s, int c)
{
    while (*s)
        if(*s++ == (char)c)
            return ((char *)s - 1);
    if (c == '\0')
        return ((char *)s);
    return (NULL);
}
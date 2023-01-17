
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtegano <gtegano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 13:12:19 by gtegano           #+#    #+#             */
/*   Updated: 2023/01/17 13:12:19 by gtegano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t		ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	rsl;

	i = ft_strlen(dest);
	rsl = ft_strlen(src);
	j = 0;
	if (size == 0)
		return (rsl);
	if (size < i)
		rsl += size;
	else
		rsl += i;
	while (src[j] != '\0' && i < size - 1 && dest != src)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (rsl);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gteg <gteg@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 10:57:35 by ffrau             #+#    #+#             */
/*   Updated: 2023/05/07 17:30:41 by gteg             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)(str1 + i) != *(unsigned char *)(str2 + i))
			return (*(unsigned char *)(str1 + i) -
					*(unsigned char *)(str2 + i));
		i++;
	}
	return (0);
}

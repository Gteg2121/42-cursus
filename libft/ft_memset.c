/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gteg <gteg@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 10:57:47 by ffrau             #+#    #+#             */
/*   Updated: 2023/05/07 17:30:57 by gteg             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*buffer;

	buffer = NULL;
	buffer = (unsigned char *) str;
	while (n--)
		buffer[n] = (unsigned char) c;
	return ((void *) str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtegano <gtegano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 18:13:16 by gtegano           #+#    #+#             */
/*   Updated: 2023/01/18 12:08:05 by gtegano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const	char *h, const	char *n)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!*n)
		return ((char *)h);
	while (h[i] != '\0')
	{
		if (h[i] == n[0])
		{
			while (n[j] != '\0' && h[i + j] == n[j])
			{
				if (n[j + 1] == '\0')
					return ((char *)&h[i]);
				j++;
			}
		}
		i++;
	}
	return (NULL);
}

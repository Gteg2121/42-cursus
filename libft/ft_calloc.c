/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtegano <gtegano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 14:45:02 by gtegano           #+#    #+#             */
/*   Updated: 2023/01/18 15:36:05 by gtegano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	i;
	void	*str;

	str = malloc(size * nmemb);
	if (!str)
		return (NULL);
	i = 0;
	ft_bzero(str, size * nmemb);
	return (str);
}

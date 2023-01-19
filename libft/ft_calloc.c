/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtegano <gtegano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 14:45:02 by gtegano           #+#    #+#             */
/*   Updated: 2023/01/19 12:00:28 by gtegano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*str;

	str = (void *) malloc(size * nmemb);
	if (!str)
		return (NULL);
	ft_bzero(str, nmemb * size);
	return (str);
}

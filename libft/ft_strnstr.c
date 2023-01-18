/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtegano <gtegano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 11:25:40 by gtegano           #+#    #+#             */
/*   Updated: 2023/01/18 11:53:20 by gtegano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *h, const char *n, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!*n)
		return ((char *)h);
	while (haystack[i] != '\0' && i < len)
	{
		if (haystack[i] == needle[0])
		{
			while (n[j] != '\0' && h[i + j] == n[j] && i + j < len)
			{
				if (n[j + 1] == '\0')
					return ((char *) & h[i]);
				j++;
			}
		}
		i++;
	}
	return (NULL);
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtegano <gtegano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 16:26:24 by gtegano           #+#    #+#             */
/*   Updated: 2023/01/17 16:26:24 by gtegano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int     ft_toupper(int c)
{
    if (ft_islower(c))
        return (c = c - 32);
    return (c);
}
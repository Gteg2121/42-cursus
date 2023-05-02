/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftp_unit_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gteg <gteg@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 11:42:46 by gteg              #+#    #+#             */
/*   Updated: 2023/05/02 11:43:30 by gteg             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_unsigned_nbr(unsigned	int nb)
{
	if (nb == 4294967295)
	{
		ft_putnbr(nb / 10);
		ft_putchar('5');
	}
	else
	{
		if (nb > 9)
		{
			ft_putnbr(nb / 10);
		}
		ft_putchar(48 + nb % 10);
	}
	if (nb < 0)
		return (ll_lenght(4294967295 - nb + 1, 10));
	return (ll_lenght(nb, 10));
}

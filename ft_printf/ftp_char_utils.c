/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftp_char_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gteg <gteg@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 11:08:15 by gteg              #+#    #+#             */
/*   Updated: 2023/05/02 11:10:27 by gteg             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_char(va_list param)
{
	char	buffer;
	
	buffer = va_arg(param, int);
	ft_putchar(buffer)
	return (1);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gteg <gteg@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 15:13:10 by gteg              #+#    #+#             */
/*   Updated: 2023/05/04 15:13:51 by gteg             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../pipex.h"

void	print_exit_error(char *s, int err)
{
	perror(s);
	exit(err);
}

void	print_error(char *s, int err)
{
	ft_putstr_fd(s, 2);
	exit(err);
}
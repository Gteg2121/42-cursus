/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gteg <gteg@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 15:01:52 by gteg              #+#    #+#             */
/*   Updated: 2023/05/04 15:06:26 by gteg             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

int	main(int argc, char **argv, char **env)
{
	int	i;
	int	filein;
	int	fileout;

	if (argc < 5)
		print_error(ft_strjoin(FEW_ARGS_TXT, ARG1_ERROR_TXT), ARG1_ERROR);
	if (ft_strcmp(argv[1], "here_doc"))
	{
		i = 3;
		fileout = file_opener(argv[argc - 1], 0);
		bonus2(argv[2], argc);
	}
	else
	{
		i = 2;
		fileout = file_opener(argv[argc - 1], 1);
		filein = file_opener(argv[1], 2);
		dup2(filein, STDIN_FILENO);
	}
	while (i < argc - 2)
		child_process(argv[i++], env);
	dup2(fileout, STDOUT_FILENO);
	execute(argv[argc - 2], env);
}
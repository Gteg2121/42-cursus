/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gteg <gteg@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 14:58:24 by gteg              #+#    #+#             */
/*   Updated: 2023/05/04 15:01:04 by gteg             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

#include "p_error.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <errno.h>
#include <stdbool.h>

void	free_matrix(char **matrix);

void	child_process(char *argv, char **env);
void	bonus2(char *limiter, int argc);

int		file_opener(char *argv, int i);
char	*find_cmd_path(char *cmd, char **env);
void	execute(char *argv, char **env);
int		get_next_line(char **line);

void	print_exit_error(char *s, int err);
void	print_error(char *s, int err);

int		get_word(const char *s, char c);
char	**ft_split(const char *s, char c);

char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strdup(const char *src);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

int		ft_strlen(const char *str);
void	ft_putstr_fd(char *s, int fd);
bool	ft_strcmp(const char *s1, const char *s2);

void	child_process(char *argv, char **env);
void	bonus2(char *limiter, int argc);
int		main(int argc, char **argv, char **env);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gteg <gteg@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 12:56:43 by gteg              #+#    #+#             */
/*   Updated: 2023/05/02 13:12:18 by gteg             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_read_to_backup(int fd, char *backup)
{
	char	*buff;
	int		bytes;

	buff = malloc(BUFFER_SIZE + 1);
	if (!buff)
		return (NULL);
	bytes = 1;
	while (!ft_strchr(backup, '\n') && bytes != 0)
	{
		bytes = read(fd, buff, BUFFER_SIZE);
		if (bytes == -1)
		{
			free(buff);
			return (NULL);
		}
		buff[bytes] = '\0';
		backup = ft_strjoin(backup, buff);
	}
	free(buff);
	return (backup);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*backup[4096];

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	backup[fd] = ft_read_to_backup(fd, backup[fd]);
	if (!backup[fd])
		return (NULL);
	line = ft_get_line(backup[fd]);
	backup[fd] = ft_backup(backup[fd]);
	return (line);
}
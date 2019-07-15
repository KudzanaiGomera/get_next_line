/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgomera <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 14:32:33 by kgomera           #+#    #+#             */
/*   Updated: 2019/07/15 15:49:15 by kgomera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char		*ft_read(char **lines, char *point)
{
	char		*stor;
	int			i;

	i = 0;
	while (point[i] != '\0' && point[i] != '\n')
		i++;
	*lines = ft_strsub(point, 0, i);
	if (ft_strcmp(*lines, point) == 0)
		point = NULL;
	else
	{
		stor = point;
		point = ft_strsub(point, i + 1, ft_strlen(point + i + 1));
		free(stor);
	}
	return (point);
}

int				get_next_line(const int fd, char **line)
{
	static char	*s_line[1024];
	char		character[BUFF_SIZE + 1];
	int			ret;
	char		*temp;

	if (fd < 0 || !line || read(fd, character, 0) < 0)
		return (INVALID);
	if (!s_line[fd])
		s_line[fd] = ft_strnew(BUFF_SIZE);
	while ((ret = read(fd, character, BUFF_SIZE)) > 0)
	{
		character[ret] = '\0';
		temp = ft_strjoin(s_line[fd], character);
		free(s_line[fd]);
		s_line[fd] = temp;
		if (ft_strchr(s_line[fd], '\n'))
			break ;
	}
	if ((ret < BUFF_SIZE) && !ft_strlen(s_line[fd]))
		return (DONE);
	s_line[fd] = ft_read(line, s_line[fd]);
	return (READING);
}

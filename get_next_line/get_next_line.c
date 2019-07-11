/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgomera <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 14:32:33 by kgomera           #+#    #+#             */
/*   Updated: 2019/07/11 10:27:56 by kgomera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int				get_next_line(const int fd, char **line)
{
	static char	*s_line[1024];
	char		character[BUFF_SIZE + 1];
	int			ret;

	if (!s_line[fd])
		s_line[fd] = ft_strnew(0);
	while ((ret = read(fd, character, BUFF_SIZE)) > 0)
	{
		character[ret] = '\0';
		s_line[fd] = strjoin(s_line[fd], character);
		if (ft_strchr(s_line[fd], '\n'))
			break ;
	}
	if (ret < 0)
		return (INVALID);
	if ((ret < BUFF_SIZE) && !ft_strlen(s_line[fd]))
		return (DONE);
	s_line[fd] = ft_red(line, s_line[fd]);
	return (READING);
}

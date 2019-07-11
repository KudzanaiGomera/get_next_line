/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgomera <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 09:43:55 by kgomera           #+#    #+#             */
/*   Updated: 2019/07/11 10:27:16 by kgomera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 32
# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include "libft/libft.h"

enum	e_msg
{
	DONE,
	READING,
	INVALID = -1
};

int		get_next_line(const int fd, char **line);

#endif

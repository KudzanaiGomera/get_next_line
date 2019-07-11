/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgomera <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 14:27:25 by kgomera           #+#    #+#             */
/*   Updated: 2019/07/11 10:29:28 by kgomera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <ctype.h>
#include <stdbool.h>
#include "get_next_line.h"

int				main(int argc, char **argv)
{
	char	*txt;
	int		fd;
	int		ret;

	fd = open(argv[1], O_RDONLY);
	while ((ret = get_next_line(fd, &txt)) > 0)
	{
		printf("%s\n", txt);
	}
	printf("Done\n");
	if (txt != NULL)
	{
		free(txt);
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_red.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgomera <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 13:56:46 by kgomera           #+#    #+#             */
/*   Updated: 2019/07/09 14:03:52 by kgomera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_red(char **lines, char *point)
{
	char	*stor;
	int		i;

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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strjoin.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgomera <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 13:44:03 by kgomera           #+#    #+#             */
/*   Updated: 2019/07/09 13:54:26 by kgomera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*strjoin(char *s, char *str)
{
	size_t	n;
	char	*newstring;

	if (!s || !str)
		return (NULL);
	n = (ft_strlen(s) + ft_strlen(str));
	if (!(newstring = ft_strnew(n)))
		return (NULL);
	newstring = ft_strcat(newstring, s);
	free(s);
	newstring = ft_strcat(newstring, str);
	return (newstring);
}

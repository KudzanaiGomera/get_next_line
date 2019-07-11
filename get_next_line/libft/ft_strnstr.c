/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgomera <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 08:44:54 by kgomera           #+#    #+#             */
/*   Updated: 2019/06/14 12:29:31 by kgomera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strnstr(const char *hay, const char *needle, size_t n)
{
	int		i;
	size_t	j;
	size_t	k;

	i = 0;
	if ((needle[i] == '\0') && (hay[i] == '\0'))
		return ((char *)hay);
	while (hay[i])
	{
		j = i;
		k = 0;
		if (needle[k] == '\0')
			return ((char *)hay + i);
		while (hay[i] && needle[k] && hay[j] == needle[k] && j < n)
		{
			j++;
			k++;
			if (needle[k] == '\0')
				return ((char *)hay + i);
		}
		i++;
	}
	return (NULL);
}

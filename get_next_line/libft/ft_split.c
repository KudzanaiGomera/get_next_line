/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgomera <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 12:16:37 by kgomera           #+#    #+#             */
/*   Updated: 2019/06/18 12:18:40 by kgomera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_split(char **dst, char const *s, char c)
{
	size_t	i;
	size_t	len;
	char	*word;

	i = 0;
	while (*s != '\0')
	{
		while (*s == c && *s != '\0')
			s++;
		len = ft_size(s, c);
		if (len != 0)
		{
			word = ft_strsub(s, 0, len);
			dst[i] = word;
			i++;
		}
		s = s + len;
		while (*s == c && *s != '\0')
			s++;
	}
	dst[i] = NULL;
}

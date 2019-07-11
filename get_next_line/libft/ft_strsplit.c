/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgomera <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 07:54:36 by kgomera           #+#    #+#             */
/*   Updated: 2019/06/19 08:44:20 by kgomera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		**ft_alloc(size_t len)
{
	char	**dst;

	dst = (char **)malloc(sizeof(char *) * len + 1);
	if (!dst)
		return (NULL);
	dst[0] = NULL;
	return (dst);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**dst;
	size_t	count;

	if (!s)
		return (NULL);
	count = ft_count(s, c);
	dst = ft_alloc(count);
	if (!dst)
		return (NULL);
	ft_split(dst, s, c);
	return (dst);
}

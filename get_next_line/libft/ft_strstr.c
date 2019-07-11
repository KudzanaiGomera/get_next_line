/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgomera <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 10:43:37 by kgomera           #+#    #+#             */
/*   Updated: 2019/06/18 11:23:08 by kgomera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char					*ft_strstr(const char *str, const char *to_search)
{
	const char	*a;
	const char	*b;

	if (*to_search == '\0')
		return ((char *)str);
	while (*str != '\0')
	{
		a = str;
		b = to_search;
		while (*b != '\0' && *a == *b)
		{
			a++;
			b++;
		}
		if (*b == '\0')
			return ((char*)str);
		str++;
	}
	return (0);
}

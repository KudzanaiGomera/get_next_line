/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgomera <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 09:02:50 by kgomera           #+#    #+#             */
/*   Updated: 2019/06/17 14:43:19 by kgomera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memcpy(void *dst, const void *src, size_t len)
{
	char		*s1;
	const char	*s2;

	if (!dst && !src)
		return (NULL);
	s1 = (char *)dst;
	s2 = (const char *)src;
	while (len--)
	{
		*s1++ = *s2++;
	}
	return (dst);
}

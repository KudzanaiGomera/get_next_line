/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgomera <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 11:42:06 by kgomera           #+#    #+#             */
/*   Updated: 2019/06/18 11:35:58 by kgomera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*s1;
	char	*s2;

	s1 = (char *)src;
	s2 = (char *)dst;
	if (!dst && !src)
		return (NULL);
	if (s1 < s2)
	{
		s1 = s1 + n - 1;
		s2 = s2 + n - 1;
		while (n-- > 0)
			*s2-- = *s1--;
	}
	else
		while (n-- > 0)
		{
			*s2++ = *s1++;
		}
	return (dst);
}

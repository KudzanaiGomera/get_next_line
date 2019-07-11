/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgomera <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 08:51:44 by kgomera           #+#    #+#             */
/*   Updated: 2019/06/18 10:15:20 by kgomera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char *str1;
	unsigned char *str2;

	str1 = (unsigned char *)src;
	str2 = (unsigned char *)dst;
	if (n == 0 && src == NULL)
		return (str1);
	while (n > 0)
	{
		if (*str1 == (unsigned char)c)
		{
			*str2 = *str1;
			return ((void *)str2 + 1);
		}
		*str2 = *str1;
		str1++;
		str2++;
		n--;
	}
	return (NULL);
}

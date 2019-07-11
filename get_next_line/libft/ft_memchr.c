/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgomera <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 09:38:31 by kgomera           #+#    #+#             */
/*   Updated: 2019/06/21 16:32:38 by kgomera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void			*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *str;

	str = (unsigned char *)s;
	while (n > 0 && *str != (unsigned char)c)
	{
		str++;
		n--;
	}
	if (n == 0)
		return (NULL);
	return ((void*)str);
}

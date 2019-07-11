/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgomera <kgomera@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 02:56:20 by kgomera           #+#    #+#             */
/*   Updated: 2019/06/14 09:51:07 by kgomera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memset(void *b, int c, size_t len)
{
	unsigned char *str;
	unsigned char a;

	str = (unsigned char *)b;
	a = (unsigned char)c;
	while (len > 0)
	{
		len--;
		*str = a;
		str++;
	}
	return (b);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgomera <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 12:11:30 by kgomera           #+#    #+#             */
/*   Updated: 2019/06/14 10:27:53 by kgomera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (n > 0 && src[j] != '\0')
	{
		dest[i] = src[j];
		n--;
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

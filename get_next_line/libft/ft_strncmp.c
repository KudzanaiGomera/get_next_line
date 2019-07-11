/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgomera <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 11:45:38 by kgomera           #+#    #+#             */
/*   Updated: 2019/06/24 13:46:21 by kgomera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_strncmp(const char *str1, const char *str2, size_t n)
{
	while (n > 0)
	{
		if (*str1 != *str2)
		{
			if ((unsigned char)*str1 - (unsigned char)*str2 < 0)
				return (-1);
			else
				return (1);
		}
		if (*str1 == '\0' && *str2 == '\0')
			return (0);
		str1++;
		str2++;
		n--;
	}
	return (0);
}

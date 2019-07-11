/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgomera <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 09:51:27 by kgomera           #+#    #+#             */
/*   Updated: 2019/06/24 14:41:05 by kgomera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strdup(const char *str)
{
	char	*str2;
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	str2 = (char *)malloc(sizeof(char) * i + 1);
	if (!str2)
		return (NULL);
	while (i >= 0)
	{
		str2[i] = str[i];
		i--;
	}
	str2[i] = '\0';
	return (str2);
}

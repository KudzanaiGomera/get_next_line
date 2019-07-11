/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgomera <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 08:24:29 by kgomera           #+#    #+#             */
/*   Updated: 2019/06/14 10:13:07 by kgomera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_strequ(char const *s1, char const *s2)
{
	char *str1;
	char *str2;

	str1 = (char *)s1;
	str2 = (char *)s2;
	if (str1 == NULL || str2 == NULL)
		return (0);
	if (ft_strcmp(str1, str2) == 0)
		return (1);
	else
		return (0);
}

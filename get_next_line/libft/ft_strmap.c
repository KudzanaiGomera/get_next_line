/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgomera <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 15:06:43 by kgomera           #+#    #+#             */
/*   Updated: 2019/06/14 10:24:58 by kgomera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strmap(char const *s, char (*f)(char))
{
	size_t	i;
	char	*new;

	i = 0;
	if (!(s))
		return (0);
	new = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (new != NULL)
	{
		while (s[i] != '\0')
		{
			new[i] = f(s[i]);
			i++;
		}
		new[i] = '\0';
		return (new);
	}
	else
		return (0);
}

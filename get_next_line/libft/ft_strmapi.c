/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgomera <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 10:25:24 by kgomera           #+#    #+#             */
/*   Updated: 2019/06/14 10:26:25 by kgomera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*new;

	i = 0;
	if (!(s))
		return (NULL);
	new = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (new != NULL)
	{
		while (s[i] != '\0')
		{
			new[i] = f(i, s[i]);
			i++;
		}
		new[i] = '\0';
		return (new);
	}
	else
		return (NULL);
}

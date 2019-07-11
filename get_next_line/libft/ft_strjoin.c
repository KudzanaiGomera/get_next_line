/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgomera <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 12:36:38 by kgomera           #+#    #+#             */
/*   Updated: 2019/07/09 13:42:56 by kgomera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strjoin(char const *s1, char const *s2)
{
	int		len;
	char	*new;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	new = ft_memalloc(len);
	if (!new)
		return (NULL);
	ft_strcpy(new, (char *)s1);
	ft_strcat(new, s2);
	return (new);
}

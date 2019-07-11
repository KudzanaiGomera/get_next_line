/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgomera <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 10:47:28 by kgomera           #+#    #+#             */
/*   Updated: 2019/06/14 12:31:40 by kgomera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *sub;

	if (s == NULL)
		return (NULL);
	if (!(sub = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	if (sub != '\0')
		ft_memcpy(sub, s + start, len);
	sub[len] = 0;
	return (sub);
}

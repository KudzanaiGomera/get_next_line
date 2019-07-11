/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgomera <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 09:16:12 by kgomera           #+#    #+#             */
/*   Updated: 2019/06/14 13:03:51 by kgomera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t				ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len;
	char	*str;

	str = (char *)src;
	len = ft_strlen(dst);
	if (len > dstsize)
		return (ft_strlen(str) + dstsize);
	if (len < dstsize)
		ft_strncat(dst, str, (dstsize - ft_strlen(dst)) - 1);
	return (len + ft_strlen(src));
}

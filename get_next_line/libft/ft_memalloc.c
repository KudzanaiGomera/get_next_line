/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgomera <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 15:15:01 by kgomera           #+#    #+#             */
/*   Updated: 2019/06/14 09:34:01 by kgomera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memalloc(size_t size)
{
	void	*str;

	str = (void *)malloc(sizeof(void) * size);
	{
		if (str == NULL || size == 0)
			return (NULL);
	}
	bzero(str, size);
	return (str);
}

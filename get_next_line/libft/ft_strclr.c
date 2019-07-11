/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgomera <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 14:29:10 by kgomera           #+#    #+#             */
/*   Updated: 2019/06/14 10:05:56 by kgomera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_strclr(char *s)
{
	int k;

	k = 0;
	if (s != NULL)
	{
		while (s[k] != '\0')
		{
			s[k] = 0;
			k++;
		}
	}
}
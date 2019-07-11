/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgomera <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 10:50:08 by kgomera           #+#    #+#             */
/*   Updated: 2019/06/14 10:50:48 by kgomera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strtrim(char const *s)
{
	int		len;
	int		i;
	int		j;
	char	*new;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	new = ft_strnew(len + 1);
	if (!new)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	while (i != len && (s[len - 1] == ' ' || s[len - 1] == '\n' ||
				s[len - 1] == '\t'))
		len--;
	if (!(new = (char *)malloc(sizeof(char) * (len - i + 1))))
		return (NULL);
	while (i < len)
		new[j++] = s[i++];
	new[j] = '\0';
	return (new);
}

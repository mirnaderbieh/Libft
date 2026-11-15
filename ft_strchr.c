/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mderbieh <mderbieh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 18:42:20 by mderbieh          #+#    #+#             */
/*   Updated: 2026/11/15 15:12:28 by mderbieh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int				i;
	unsigned char	ch;

	ch = (unsigned char)c;
	i = 0;
	if (ch == 0)
	{
		return ((char *)s + ft_strlen((char *)s));
	}
	while (s[i] != '\0')
	{
		if (s[i] == ch)
			return ((char *)(s + i));
		i++;
	}
	return (0);
}

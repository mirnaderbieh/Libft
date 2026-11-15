/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mderbieh <mderbieh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 18:47:50 by mderbieh          #+#    #+#             */
/*   Updated: 2026/11/15 15:11:15 by mderbieh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	char			*var;
	unsigned char	ch;

	ch = (unsigned char)c;
	var = 0;
	i = 0;
	if (ch == 0)
	{
		return ((char *)s + ft_strlen((char *)s));
	}
	while (s[i] != '\0')
	{
		if (s[i] == ch)
			var = (char *)s + i;
		i++;
	}
	return (var);
}

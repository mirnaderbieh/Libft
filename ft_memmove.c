/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mderbieh <mderbieh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 15:22:00 by mderbieh          #+#    #+#             */
/*   Updated: 2026/11/15 15:57:19 by mderbieh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*a1;
	const unsigned char	*a2;
	size_t				i;

	a1 = dest;
	a2 = src;
	if (a1 < a2)
	{
		i = 0;
		while (i < n)
		{
			a1[i] = a2[i];
			i++;
		}
	}
	else if (a1 > a2)
	{
		while (n > 0)
		{
			n--;
			a1[n] = a2[n];
		}
	}
	return (dest);
}

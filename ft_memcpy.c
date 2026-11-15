/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mderbieh <mderbieh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 15:21:07 by mderbieh          #+#    #+#             */
/*   Updated: 2026/11/15 15:09:59 by mderbieh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*a1;
	const unsigned char	*a2;
	size_t				i;

	a1 = (unsigned char *)dest;
	a2 = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		a1[i] = a2[i];
		i++;
	}
	return (dest);
}

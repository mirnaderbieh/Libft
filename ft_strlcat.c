/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mderbieh <mderbieh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 18:23:06 by mderbieh          #+#    #+#             */
/*   Updated: 2026/11/15 15:10:45 by mderbieh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	dest_length;
	unsigned int	i;

	i = 0;
	dest_length = ft_strlen(dst);
	if (size <= dest_length)
		return (size + ft_strlen(src));
	while (src[i] != '\0' && i < size - dest_length - 1)
	{
		dst[dest_length + i] = src[i];
		i++;
	}
	dst[dest_length + i] = '\0';
	return (ft_strlen(src) + dest_length);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mderbieh <mderbieh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 19:24:04 by mderbieh          #+#    #+#             */
/*   Updated: 2026/11/15 15:11:09 by mderbieh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == '\0')
	{
		return ((char *)big);
	}
	if (ft_strlen((char *)little) > ft_strlen((char *)big))
	{
		return (0);
	}
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && i + j < len && big[i + j] != '\0')
		{
			j++;
		}
		if (j == ft_strlen((char *)little))
			return ((char *)big + i);
		i++;
	}
	return (0);
}

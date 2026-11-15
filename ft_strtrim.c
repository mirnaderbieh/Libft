/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mderbieh <mderbieh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 18:37:30 by mderbieh          #+#    #+#             */
/*   Updated: 2026/11/15 15:11:19 by mderbieh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	isset(char const *set, char c)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	int		i;
	int		end;
	int		start;

	start = 0;
	while (s1[start] != '\0' && isset(set, s1[start]))
		start++;
	if ((size_t)start == ft_strlen(s1))
		return (ft_strdup(""));
	end = ft_strlen(s1) - 1;
	while (s1[end] != '\0' && isset(set, s1[end]))
		end--;
	res = (char *)malloc((end - start + 2) * sizeof(char));
	i = 0;
	while (i + start <= end)
	{
		res[i] = s1[i + start];
		i++;
	}
	res[i] = '\0';
	return (res);
}

// #include <stdio.h>
// int main()
// {
// 	char *set = " *";
// 	char arr[21] = "   *  mirna  mirna   ";
// 	char *res = ft_strtrim(arr, set);
// 	printf("%s",res);
// }
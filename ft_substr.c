/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mderbieh <mderbieh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 16:03:05 by mderbieh          #+#    #+#             */
/*   Updated: 2026/11/15 15:11:23 by mderbieh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	size_t	i;
	size_t	s_len;

	s_len = ft_strlen(s);
	if (start > s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	i = 0;
	substring = (char *)malloc((len + 1) * sizeof(char));
	if (!substring)
	{
		return (NULL);
	}
	while (i < len)
	{
		substring[i] = s[start + i];
		i++;
	}
	substring[i] = '\0';
	return (substring);
}

// #include <stdio.h>

// int main()
// {
// 	char arr[10] = "mirnaderbi";
// 	char *res;
// 	res = ft_substr(arr, 1, 6);

// 	for (int i =0; i<5 ; i ++)
// 	{
// 		printf("%c", res[i]);
// 	}
// 	free (res);

// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mderbieh <mderbieh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 20:56:12 by mderbieh          #+#    #+#             */
/*   Updated: 2026/11/15 15:10:25 by mderbieh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	count_words(char const *s, char c)
{
	int	count;
	int	in_word;

	in_word = 0;
	count = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static const char	*set_word(const char *s, char c, char **arr, int i)
{
	int	word_len;

	word_len = 0;
	while (1)
	{
		if (*s == c || *s == '\0')
			break ;
		word_len++;
		s++;
	}
	arr[i] = (char *)malloc((word_len + 1) * sizeof(char));
	if (!arr[i])
		return (NULL);
	ft_strlcpy(arr[i], s - word_len, word_len + 1);
	return (s);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		i;

	i = 0;
	arr = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!arr)
		return (NULL);
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			s = set_word(s, c, arr, i);
			i++;
		}
	}
	arr[i] = NULL;
	return (arr);
}

// #include <stdio.h>
// int main()
// {
// 	char *arr = "hello world! 42 beirut mirna derbieh";
// 	printf("%d", count_words(arr, ' '));
// 	char ** res= ft_split(arr, ' ');
// 	for(int i =0 ; i< count_words(arr, ' ') + 1; i++)
// 	{
// 		printf("%s  ", res[i]);
// 	}
// }
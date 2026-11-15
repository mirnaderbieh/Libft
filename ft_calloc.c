/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mderbieh <mderbieh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 13:41:24 by mderbieh          #+#    #+#             */
/*   Updated: 2026/11/15 15:09:24 by mderbieh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*arr;

	if (nmemb == 0 || size == 0)
		return (malloc(1));
	if (nmemb > SIZE_MAX / size)
		return ((void *)0);
	arr = malloc(nmemb * size);
	if (!arr)
		return ((void *)0);
	ft_bzero(arr, nmemb * size);
	return (arr);
}

// #include <stdio.h>
// int main()
// {
// 	int *arr = (int *)calloc(5,sizeof(int));
// 	for (int i =0; i<5; i++)
// 	{
// 		printf("%d", arr[i]);
// 	}
// }

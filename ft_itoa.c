/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mderbieh <mderbieh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 15:25:42 by mderbieh          #+#    #+#             */
/*   Updated: 2026/11/15 15:09:48 by mderbieh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	count_digit(int n)
{
	int		count;
	long	num;

	num = n;
	count = 0;
	if (num == 0)
		return (1);
	if (num < 0)
		num = -num;
	while (num > 0)
	{
		num = num / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	long	num;
	char	*str;
	int		track;

	num = n;
	track = count_digit(num);
	if (num < 0)
		track++;
	str = malloc(track + 1);
	if (!str)
		return (NULL);
	str[track] = '\0';
	if (num == 0)
		str[0] = '0';
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	while (num > 0)
	{
		str[--track] = (num % 10) + '0';
		num /= 10;
	}
	return (str);
}

// #include <stdio.h>
// int main(void)
// {
// 	char *str;

// 	str = ft_itoa(123);
// 	printf("123  -> %s\n", str);
// 	free(str);

// 	str = ft_itoa(-456);
// 	printf("-456 -> %s\n", str);
// 	free(str);

// 	str = ft_itoa(0);
// 	printf("0    -> %s\n", str);
// 	free(str);

// 	return (0);
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mderbieh <mderbieh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 13:02:41 by mderbieh          #+#    #+#             */
/*   Updated: 2026/11/16 16:29:30 by mderbieh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static const char	*skip_whitespace(const char *nptr)
{
	while (*nptr == 32 || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	return (nptr);
}

int	ft_atoi(const char *nptr)
{
	int	i;
	int	n;
	int	sign;

	i = 0;
	n = 0;
	nptr = skip_whitespace((char *)nptr);
	sign = 1;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			sign = -sign;
		nptr++;
	}
	while (nptr[i] != '\0')
	{
		if (!(nptr[i] >= 48 && nptr[i] <= 57))
			break ;
		n = n * 10 + (nptr[i] - '0');
		i++;
	}
	return (n * sign);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n", ft_atoi("   -42abc"));
// 	return (0);
// }
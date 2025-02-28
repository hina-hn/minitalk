/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmatsuba <hmatsuba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 17:18:19 by hmatsuba          #+#    #+#             */
/*   Updated: 2024/11/21 17:45:44 by hmatsuba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	num;
	int	result;

	i = 0;
	num = 1;
	result = 0;
	if (nptr == NULL)
		return (0);
	while (nptr[i] == ' ' || nptr[i] == '\r' || nptr[i] == '\f'
		|| nptr[i] == '\n' || nptr[i] == '\t' || nptr[i] == '\v')
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			num *= -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = result * 10 + (nptr[i] - '0');
		i++;
	}
	return (result * num);
}

// #include <stdio.h>

// int	main(void)
// {
// 	const char	*str1 = "   -1234";
// 	const char	*str2 = "42";
// 	const char	*str3 = "   +5678abc";

// 	printf("%d\n", atoi(str1)); // -1234
// 	printf("%d\n", atoi(str2)); // 42
// 	printf("%d\n", atoi(str3)); // 5678
// 	return (0);
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmatsuba <hmatsuba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 13:18:45 by hmatsuba          #+#    #+#             */
/*   Updated: 2024/11/14 15:01:36 by hmatsuba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_abs(int n)
{
	if (n < 0)
	{
		return (-(unsigned int)n);
	}
	else
	{
		return ((unsigned int)n);
	}
}

char	*ft_itoa(int n)
{
	char			str[12];
	unsigned int	absed_n;
	int				i;

	i = 12;
	str[--i] = '\0';
	absed_n = ft_abs(n);
	while (absed_n)
	{
		str[--i] = '0' + (absed_n % 10);
		absed_n /= 10;
	}
	if (n < 0)
		str[--i] = '-';
	if (n == 0)
		str[--i] = '0';
	return (ft_strdup(&str[i]));
}

// int	main(void)
// {
// 	int		num;
// 	char	*str;

// 	num = 12345;
// 	str = ft_itoa(num);
// 	if (str)
// 	{
// 		printf("The string representation of %d is %s\n", num, str);
// 		free(str);
// 	}
// 	return (0);
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmatsuba <hmatsuba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 17:00:26 by hmatsuba          #+#    #+#             */
/*   Updated: 2024/11/12 15:21:25 by hmatsuba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int str)
{
	if ((str >= 'A' && str <= 'Z') || (str >= 'a' && str <= 'z') || (str >= '0'
			&& str <= '9'))
	{
		return (1);
	}
	else
		return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n", ft_isalnum('C'));
// 	printf("%d\n", ft_isalnum('s'));
// 	printf("%d\n", ft_isalnum('0'));
// 	printf("%d\n", ft_isalnum('\n'));
// 	return (0);
// }

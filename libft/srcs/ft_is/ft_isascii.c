/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmatsuba <hmatsuba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 17:08:03 by hmatsuba          #+#    #+#             */
/*   Updated: 2024/11/12 15:21:44 by hmatsuba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int str)
{
	if (str >= 0 && str <= 127)
	{
		return (1);
	}
	else
		return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n", ft_isascii('5'));
// 	printf("%d\n", ft_isascii('h'));
// 	printf("%d\n", ft_isascii(' '));
// 	printf("%d\n", ft_isascii(255));
// 	return (0);
// }

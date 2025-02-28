/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmatsuba <hmatsuba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 17:13:15 by hmatsuba          #+#    #+#             */
/*   Updated: 2024/11/12 15:21:57 by hmatsuba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int str)
{
	if (str >= 32 && str <= 126)
	{
		return (1);
	}
	else
		return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n", ft_isprint('5'));
// 	printf("%d\n", ft_isprint('h'));
// 	printf("%d\n", ft_isprint(' '));
// 	printf("%d\n", ft_isprint('\n'));
// 	return (0);
// }

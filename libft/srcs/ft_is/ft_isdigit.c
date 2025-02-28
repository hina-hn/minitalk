/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmatsuba <hmatsuba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:50:29 by hmatsuba          #+#    #+#             */
/*   Updated: 2024/11/12 15:21:51 by hmatsuba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int str)
{
	if (str >= '0' && str <= '9')
	{
		return (1);
	}
	else
		return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n", ft_isdigit('5'));
// 	printf("%d\n", ft_isdigit('h'));
// 	printf("%d\n", ft_isdigit('\n'));
// 	return (0);
// }

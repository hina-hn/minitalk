/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmatsuba <hmatsuba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:33:58 by hmatsuba          #+#    #+#             */
/*   Updated: 2024/11/12 15:21:30 by hmatsuba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(char str)
{
	if ((str >= 'A' && str <= 'Z') || (str >= 'a' && str <= 'z'))
	{
		return (1);
	}
	else
		return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n", ft_isalpha('C'));
// 	printf("%d\n", ft_isalpha('s'));
// 	printf("%d\n", ft_isalpha('0'));
// 	return (0);
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmatsuba <hmatsuba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:52:02 by hmatsuba          #+#    #+#             */
/*   Updated: 2024/11/12 15:23:41 by hmatsuba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		c = c - 32;
	}
	return (c);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%c\n", ft_toupper('A'));
// 	printf("%c\n", ft_toupper('a'));
// 	printf("%c\n", ft_toupper('1'));
// 	return (0);
// }
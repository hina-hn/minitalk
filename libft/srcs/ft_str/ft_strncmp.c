/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmatsuba <hmatsuba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 15:40:55 by hmatsuba          #+#    #+#             */
/*   Updated: 2024/11/21 17:07:43 by hmatsuba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	while (n > 0 && *s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n", ft_strncmp("hello", "hello", 4));
// 	printf("%d\n", ft_strncmp("Hello", "hello", 2));
// 	printf("%d\n", ft_strncmp("tokyo", "tokYo", 3));
// 	printf("%d\n", ft_strncmp("youth", "you", 5));
// 	return (0);
// }

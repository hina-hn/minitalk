/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmatsuba <hmatsuba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 17:47:25 by hmatsuba          #+#    #+#             */
/*   Updated: 2024/11/21 15:23:48 by hmatsuba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*p;

	i = 0;
	p = (char *)s;
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	num[10] = "hello";
// 	int		i;

// 	ft_bzero(num, 3);
// 	i = 0;
// 	while (i < 10)
// 	{
// 		printf("%d", num[i]);
// 		i++;
// 	}
// 	return (0);
// }

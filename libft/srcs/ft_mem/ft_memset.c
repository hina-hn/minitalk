/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmatsuba <hmatsuba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 17:23:52 by hmatsuba          #+#    #+#             */
/*   Updated: 2024/11/21 15:49:55 by hmatsuba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*p;

	if (s == NULL)
		return (NULL);
	i = 0;
	p = (char *)s;
	while (i < n)
	{
		p[i] = (char)c;
		i++;
	}
	return (s);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	str[10] = "hello";

// 	ft_memset(str, 'a', 3);
// 	printf("%s\n", str);
// 	return (0);
// }

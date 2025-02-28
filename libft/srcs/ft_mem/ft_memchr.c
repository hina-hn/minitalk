/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmatsuba <hmatsuba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 15:53:37 by hmatsuba          #+#    #+#             */
/*   Updated: 2024/11/21 17:15:16 by hmatsuba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p;

	if (s == NULL)
		return (NULL);
	p = (unsigned char *)s;
	while (n > 0)
	{
		if (*p == (unsigned char)c)
		{
			return ((void *)p);
		}
		p++;
		n--;
	}
	return (NULL);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char hi[] = "hello everyone";
// 	int c = 'o';
// 	char *p;

// 	p = ft_memchr(hi, c, 8);
// 	printf("%s\n", p);
// 	return (0);
// }
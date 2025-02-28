/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmatsuba <hmatsuba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 13:21:59 by hmatsuba          #+#    #+#             */
/*   Updated: 2024/11/21 18:52:09 by hmatsuba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*my_dest;
	const char	*my_src;
	size_t		i;

	my_dest = (char *)dest;
	my_src = (const char *)src;
	i = 0;
	while (i < n)
	{
		my_dest[i] = my_src[i];
		i++;
	}
	return (dest);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	src[10] = "hello";
// 	char	dest[10];

// 	ft_memcpy(dest, src, 3);
// 	printf("%s\n", dest);
// 	return (0);
// }

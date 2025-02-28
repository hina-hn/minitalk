/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmatsuba <hmatsuba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 13:42:15 by hmatsuba          #+#    #+#             */
/*   Updated: 2024/11/21 18:52:23 by hmatsuba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*my_dest;
	const char	*my_src;

	my_dest = (char *)dest;
	my_src = (const char *)src;
	if (my_dest > my_src)
	{
		i = n;
		while (i-- > 0)
			my_dest[i] = my_src[i];
	}
	else
	{
		i = 0;
		while (i < n)
		{
			my_dest[i] = my_src[i];
			i++;
		}
	}
	return (dest);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	str[] = "helloworld";
// 	char	str2[] = "helloworld";

// 	// strの内容をstrの3番目にコピー
// 	ft_memmove(str + 3, str, 5);
// 	printf("After first memmove: %s\n", str);
// 	// strの3番目以降の内容をstrの先頭にコピー
// 	ft_memmove(str2, str2 + 3, 5);
// 	printf("After second memmove: %s\n", str2);
// 	return (0);
// }

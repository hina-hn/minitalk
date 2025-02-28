/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmatsuba <hmatsuba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:37:56 by hmatsuba          #+#    #+#             */
/*   Updated: 2024/11/24 15:54:23 by hmatsuba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	len = ft_strlen(src);
	i = 0;
	if (size == 0)
		return (len);
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}

// int	main(void)
// {
// 	char c1[15] = "hello everyone";
// 	char c2[15];

// 	printf("%d\n", ft_strlcpy(c2, c1, 8));
// 	printf("%s\n", c2);
// 	printf("%d\n", ft_strlcpy(c2, c1, 2));
// 	printf("%s\n", c2);
// 	return (0);
// }
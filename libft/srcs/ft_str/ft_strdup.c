/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmatsuba <hmatsuba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 17:49:57 by hmatsuba          #+#    #+#             */
/*   Updated: 2024/11/14 14:50:33 by hmatsuba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		i;
	char	*c;

	c = (char *)malloc(sizeof(char) * (ft_strlen(src)) + 1);
	if (c == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (src[i] != '\0')
	{
		c[i] = src[i];
		i++;
	}
	c[i] = '\0';
	return (c);
}

// #include <unistd.h>

// int	main(void)
// {
// 	char *p;
// 	char x[] = "hello";

// 	p = ft_strdup(x);
// 	if (p)
// 	{
// 		write(1, p, ft_strlen(p));
// 		free(p);
// 	}
// 	return (0);
// }
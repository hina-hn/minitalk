/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmatsuba <hmatsuba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 15:29:47 by hmatsuba          #+#    #+#             */
/*   Updated: 2024/11/21 19:12:49 by hmatsuba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	s_len;

	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	while (s_len >= 0)
	{
		if (s[s_len] == (char)c)
		{
			return ((char *)&s[s_len]);
		}
		s_len--;
	}
	return (NULL);
}

// #include<stdio.h>
// int	main(void)
// {
// 	const char hi[] = "hello everyone";
// 	int c = 'l';
// 	char *p;

// 	p = ft_strrchr(hi, c);
// 	printf("%s\n", p);
// 	return (0);
// }
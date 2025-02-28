/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmatsuba <hmatsuba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 14:11:43 by hmatsuba          #+#    #+#             */
/*   Updated: 2024/11/23 15:40:20 by hmatsuba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

// void	change_case(unsigned int i, char *c)
// {
// 	if (i % 2 == 0)
// 		*c = ft_toupper(*c); // 偶数インデックスなら大文字に変換
// 	else
// 		*c = ft_tolower(*c); // 奇数インデックスなら小文字に変換
// }

// int	main(void)
// {
// 	char	str[] = "Hello, World!";

// 	printf("Before: %s\n", str);
// 	ft_striteri(str, change_case);
// 	printf("After: %s\n", str);
// 	return (0);
// }

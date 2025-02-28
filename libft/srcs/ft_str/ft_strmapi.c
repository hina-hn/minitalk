/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmatsuba <hmatsuba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 13:55:10 by hmatsuba          #+#    #+#             */
/*   Updated: 2024/11/23 15:17:42 by hmatsuba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new_str;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	new_str = ft_strdup(s);
	if (!new_str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		new_str[i] = f(i, s[i]);
		i++;
	}
	return (new_str);
}

// // 文字のインデックスによって文字を変換する関数
// char	apply_func(unsigned int i, char c)
// {
// 	if (i % 2 == 0)
// 		return (ft_toupper(c)); // インデックスが偶数なら大文字に変換
// 	else
// 		return (ft_tolower(c)); // インデックスが奇数なら小文字に変換
// }

// int	main(void)
// {
// 	char	*original_str;
// 	char	*new_str;

// 	original_str = "Hello, World!";
// 	// ft_strmapiを使用して新しい文字列を生成
// 	new_str = ft_strmapi(original_str, apply_func);
// 	if (new_str)
// 	{
// 		printf("Original string: %s\n", original_str);
// 		printf("Modified string: %s\n", new_str);
// 		free(new_str); // mallocで確保したメモリを解放
// 	}
// 	else
// 	{
// 		printf("Memory allocation failed.\n");
// 	}
// 	return (0);
// }

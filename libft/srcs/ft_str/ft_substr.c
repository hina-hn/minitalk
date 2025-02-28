/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmatsuba <hmatsuba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:03:11 by hmatsuba          #+#    #+#             */
/*   Updated: 2024/11/12 18:14:59 by hmatsuba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	size_t	actual_len;
	char	*substr;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (len > s_len)
	{
		len = s_len;
	}
	if (start + len > s_len)
		actual_len = s_len - start;
	else
		actual_len = len;
	substr = malloc(actual_len + 1);
	if (!substr)
		return (NULL);
	ft_strlcpy(substr, s + start, actual_len + 1);
	return (substr);
}

// int	main(void)
// {
// 	char	*s;
// 	char	*result;

// 	s = "Hello, World!";
// 	// 基本ケース: startが範囲内でlenが短い
// 	result = ft_substr(s, 7, 5); // "World"
// 	printf("Substring: %s\n", result);
// 	free(result);
// 	// startが範囲内でlenがsの長さを超える
// 	result = ft_substr(s, 7, 20); // "World!"
// 	printf("Substring: %s\n", result);
// 	free(result);
// 	// startが範囲内でlenが0
// 	result = ft_substr(s, 7, 0); // ""
// 	printf("Substring: %s\n", result);
// 	free(result);
// 	// startが範囲外
// 	result = ft_substr(s, 20, 5); // ""
// 	printf("Substring: %s\n", result);
// 	free(result);
// 	// 空文字列からの部分文字列
// 	result = ft_substr("", 0, 5); // ""
// 	printf("Substring: %s\n", result);
// 	free(result);
// 	// NULLポインタを渡した場合
// 	result = ft_substr(NULL, 0, 5); // NULL
// 	if (result == NULL)
// 		printf("NULL returned\n");
// 	return (0);
// }

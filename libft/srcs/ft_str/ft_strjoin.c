/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmatsuba <hmatsuba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 16:35:09 by hmatsuba          #+#    #+#             */
/*   Updated: 2024/11/23 16:55:12 by hmatsuba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	int		len1;
	int		len2;

	if (!s1 || !s2)
	{
		return (NULL);
	}
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	result = (char *)malloc(len1 + len2 + 1);
	if (!result)
	{
		return (NULL);
	}
	ft_memcpy(result, s1, len1);
	ft_memcpy((result + len1), s2, len2);
	result[len1 + len2] = '\0';
	return (result);
}

// #include <stdio.h>

// int main(void)
// {
//     // 2つの文字列を結合するテスト
//     char *s1 = "Hello, ";
//     char *s2 = "World!";
//     char *result;

//     // ft_strjoin を使って2つの文字列を結合
//     result = ft_strjoin(s1, s2);
//     if (result != NULL)
//     {
//         printf("Joined string: '%s'\n", result);
//         free(result);  // メモリの解放
//     }
//     else
//     {
//         printf("Memory allocation failed.\n");
//     }

//     // 空の文字列を結合するテスト
//     s1 = "";
//     s2 = "Test";
//     result = ft_strjoin(s1, s2);
//     if (result != NULL)
//     {
//         printf("Joined string (empty + non-empty): '%s'\n", result);
//         free(result);
//     }
//     else
//     {
//         printf("Memory allocation failed.\n");
//     }

//     // 2つとも空の文字列を結合するテスト
//     s1 = "";
//     s2 = "";
//     result = ft_strjoin(s1, s2);
//     if (result != NULL)
//     {
//         printf("Joined string (empty + empty): '%s'\n", result);
//         free(result);
//     }
//     else
//     {
//         printf("Memory allocation failed.\n");
//     }

//     return (0);
// }

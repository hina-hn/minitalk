/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmatsuba <hmatsuba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 21:43:33 by hmatsuba          #+#    #+#             */
/*   Updated: 2024/11/21 19:10:17 by hmatsuba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	free_allocated(char **arr, int size)
{
	int	i;

	i = 0;
	if (arr[size - 1] == NULL)
	{
		while (i < size)
		{
			if (arr[i])
				free(arr[i]);
			i++;
		}
		free(arr);
		return (1);
	}
	return (0);
}

static int	count_words(char const *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static char	*allocate_word(char const *start, char const *end)
{
	char	*word;
	int		i;

	word = (char *)ft_calloc(end - start + 1, sizeof(char));
	if (!word)
		return (NULL);
	i = 0;
	while (start < end)
		word[i++] = *start++;
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		word_count;
	int		i;
	char	*word_start;

	i = 0;
	word_count = count_words(s, c);
	result = (char **)ft_calloc(word_count + 1, sizeof(char *));
	if (!s || !result)
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			word_start = (char *)s;
			while (*s && *s != c)
				s++;
			result[i++] = allocate_word(word_start, s);
			if (free_allocated(result, i))
				return (NULL);
		}
		else
			s++;
	}
	return (result);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	**result;
// 	int		i;
// 	char	*s1;
// 	char	*s2;
// 	char	*s3;
// 	char	*s4;
// 	char	*s5;

// 	// テストケース 1: 基本的な分割
// 	s1 = "Hello World 42";
// 	printf("Input string: \"%s\"\n", s1);
// 	result = ft_split(s1, ' ');
// 	i = 0;
// 	while (result[i] != NULL)
// 	{
// 		printf("result[%d]: %s\n", i, result[i]);
// 		free(result[i]); // 各要素のメモリを解放
// 		i++;
// 	}
// 	free(result); // 配列自体のメモリも解放
// 	// テストケース 2: 複数の区切り文字
// 	s2 = "Hello,,,World,,,42!";
// 	printf("\nInput string: \"%s\"\n", s2);
// 	result = ft_split(s2, ',');
// 	i = 0;
// 	while (result[i] != NULL)
// 	{
// 		printf("result[%d]: %s\n", i, result[i]);
// 		free(result[i]);
// 		i++;
// 	}
// 	free(result);
// 	// テストケース 3: 区切り文字がない場合
// 	s3 = "NoDelimitersHere";
// 	printf("\nInput string: \"%s\"\n", s3);
// 	result = ft_split(s3, ' ');
// 	i = 0;
// 	while (result[i] != NULL)
// 	{
// 		printf("result[%d]: %s\n", i, result[i]);
// 		free(result[i]);
// 		i++;
// 	}
// 	free(result);
// 	// テストケース 4: 区切り文字のみの入力
// 	s4 = ",,,";
// 	printf("\nInput string: \"%s\"\n", s4);
// 	result = ft_split(s4, ',');
// 	i = 0;
// 	while (result[i] != NULL)
// 	{
// 		printf("result[%d]: %s\n", i, result[i]);
// 		free(result[i]);
// 		i++;
// 	}
// 	free(result);
// 	// テストケース 5:空の文字列
// 	s5 = "";
// 	printf("\nInput string: \"%s\"\n", s5);
// 	result = ft_split(s5, ' ');
// 	i = 0;
// 	while (result[i] != NULL)
// 	{
// 		printf("result[%d]: %s\n", i, result[i]);
// 		free(result[i]);
// 		i++;
// 	}
// 	free(result);
// 	return (0);
// }

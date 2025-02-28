/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmatsuba <hmatsuba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:48:03 by hmatsuba          #+#    #+#             */
/*   Updated: 2024/11/23 17:15:34 by hmatsuba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total_size;
	void	*ptr;

	if (size == 0)
		return (malloc(0));
	if (nmemb > SIZE_MAX / size)
	{
		return (NULL);
	}
	total_size = nmemb * size;
	ptr = malloc(total_size);
	if (!ptr)
	{
		return (NULL);
	}
	ft_memset(ptr, 0, total_size);
	return (ptr);
}

// #include <stdio.h>

// int	main(void)
// {
// 	size_t	num_elements;
// 	size_t	element_size;
// 	int		*array;
// 	size_t	i;

// 	num_elements = 5;
// 	element_size = sizeof(int);
// 	array = (int *)ft_calloc(num_elements, element_size);
// 	if (!array)
// 	{
// 		return (1);
// 	}
// 	i = 0;
// 	while (i < element_size)
// 	{
// 		printf("array[%zu] = %d\n", i, array[i]);
// 		i++;
// 	}
// 	free(array);
// 	return (0);
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmatsuba <hmatsuba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 14:30:55 by hmatsuba          #+#    #+#             */
/*   Updated: 2024/11/23 15:40:11 by hmatsuba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	if (!s)
		return ;
	i = 0;
	while (s[i] != '\0')
		i++;
	write(fd, s, i);
}

// int	main(void)
// {
// 	ft_putstr_fd("Hello, World!\n", 1); // 標準出力に出力
// 	ft_putstr_fd("Error message\n", 2); // 標準エラー出力に出力
// 	return (0);
// }

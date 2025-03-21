/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmatsuba <hmatsuba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 14:41:52 by hmatsuba          #+#    #+#             */
/*   Updated: 2024/11/14 14:49:08 by hmatsuba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
	}
	c = '0' + (n % 10);
	write(fd, &c, 1);
}

// int	main(void)
// {
// 	ft_putnbr_fd(12345, 1); // 標準出力に出力
// 	ft_putnbr_fd(-6789, 1); // 標準出力に負の数を出力
// 	ft_putnbr_fd(12345, 2); // 標準エラー出力に出力
// 	return (0);
// }

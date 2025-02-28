/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dputnbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: YourName <your.email@example.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 15:50:08 by hmatsuba          #+#    #+#             */
/*   Updated: 2025/02/23 14:39:49 by YourName         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dprintf.h"

int	ft_dputnbr(int fd, int n)
{
	char	c;
	int		len;

	len = 0;
	if (n == -2147483648)
		return (write(fd, "-2147483648", 11));
	if (n < 0)
	{
		len += write(fd, "-", 1);
		n = -n;
	}
	if (n >= 10)
		len += ft_dputnbr(fd, n / 10);
	c = (n % 10) + '0';
	len += write(fd, &c, 1);
	return (len);
}

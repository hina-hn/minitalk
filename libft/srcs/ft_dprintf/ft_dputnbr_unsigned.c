/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dputnbr_unsigned.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: YourName <your.email@example.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 17:34:46 by hmatsuba          #+#    #+#             */
/*   Updated: 2025/02/23 14:39:34 by YourName         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dprintf.h"

int	ft_dputnbr_unsigned(int fd, unsigned int n)
{
	char	c;
	int		len;

	len = 0;
	if (n >= 10)
		len += ft_dputnbr_unsigned(fd, n / 10);
	c = (n % 10) + '0';
	len += write(fd, &c, 1);
	return (len);
}

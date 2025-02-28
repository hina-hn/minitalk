/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dputnbr_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: YourName <your.email@example.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 15:51:25 by hmatsuba          #+#    #+#             */
/*   Updated: 2025/02/23 14:39:20 by YourName         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dprintf.h"

int	ft_dputnbr_base(int fd, unsigned long long nbr, char *base)
{
	int				len;
	unsigned int	base_len;

	len = 0;
	base_len = 0;
	while (base[base_len])
		base_len++;
	if (nbr >= base_len)
		len += ft_dputnbr_base(fd, nbr / base_len, base);
	len += ft_dputchar(fd, base[nbr % base_len]);
	return (len);
}

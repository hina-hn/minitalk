/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dputaddress.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: YourName <your.email@example.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 17:19:23 by hmatsuba          #+#    #+#             */
/*   Updated: 2025/02/23 14:38:57 by YourName         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dprintf.h"

int	ft_dputaddress(int fd, unsigned long long nbr, char *base)
{
	int	len;

	if (nbr == 0)
		return (ft_dputstr(fd, "(nil)"));
	len = ft_dputstr(fd, "0x");
	len += ft_dputnbr_base(fd, nbr, base);
	return (len);
}

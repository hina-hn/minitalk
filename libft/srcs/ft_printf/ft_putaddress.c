/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddress.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmatsuba <hmatsuba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 17:19:23 by hmatsuba          #+#    #+#             */
/*   Updated: 2024/12/03 16:49:30 by hmatsuba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putaddress(unsigned long long nbr, char *base)
{
	int	len;

	if (nbr == 0)
		return (ft_putstr("(nil)"));
	len = ft_putstr("0x");
	len += ft_putnbr_base(nbr, base);
	return (len);
}

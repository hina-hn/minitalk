/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: YourName <your.email@example.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 19:23:25 by hmatsuba          #+#    #+#             */
/*   Updated: 2025/02/23 14:35:47 by YourName         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DPRINTF_H
# define FT_DPRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_dprintf(int fd, const char *format, ...);
int	ft_dputchar(int fd, char c);
int	ft_dputstr(int fd, char *str);
int	ft_dputnbr(int fd, int n);
int	ft_dputnbr_base(int fd, unsigned long long nbr, char *base);
int	ft_dputaddress(int fd, unsigned long long nbr, char *base);
int	ft_dputnbr_unsigned(int fd, unsigned int n);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: YourName <your.email@example.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 15:49:26 by YourName          #+#    #+#             */
/*   Updated: 2025/02/28 19:11:53 by YourName         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/includes/libft.h"
#include <signal.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

void	handle_signal(int sig, siginfo_t *info, void *dummy)
{
	static int	bit;
	char		c;

	g_char = g_char << 1;
	if (sig == SIGUSR1)
		g_char |= 1;
	else if (sig == SIGUSR2)
		;
	bit++;
	c = 0xff & g_char;
	if (bit == 8)
	{
		wrte(STDERR_FILENO, &c, 1);
		bit = 0;
	}
}

int	main(void)
{
	struct sigaction act1;
	struct sigaction act2;

	ft_printf("%d\n", getpid());
	ft_memset(&act1, 0, sizeof(sigaction));
	ft_memset(&act2, 0, sizeof(sigaction));
	act1.sa_sigaction = handle_signal;
	act2.sa_sigaction = handle_signal;
	act1.sa_flags = SA_SIGINFO;
	act2.sa_flags = SA_SIGINFO;
	sigaddset(&act1.sa_mask, SIGUSR2);
	sigaddset(&act2.sa_mask, SIGUSR1);
	sigaction(SIGUSR1, &act1, NULL);
	sigaction(SIGUSR2, &act2, NULL);
	while (1)
		pause();
}
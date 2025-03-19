/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: YourName <your.email@example.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 15:49:26 by YourName          #+#    #+#             */
/*   Updated: 2025/03/19 19:07:47 by YourName         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/includes/libft.h"
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	handle_signal(int signal, siginfo_t *info, void *context)
{
	static unsigned char	val = 0;
	static int				bit = 1;
	static int				id = 0;

	(void)context;
	if (info->si_pid != 0)
		id = info->si_pid;
	if (signal == SIGUSR1)
		val += 0;
	if (signal == SIGUSR2)
		val += bit;
	bit <<= 1;
	if (bit == 256)
	{
		bit = 1;
		if (val == 0)
			if (kill(id, SIGUSR2) == -1)
				exit(1);
		if (val != 0)
			ft_printf("%s", &val);
		val = 0;
	}
	if (kill(id, SIGUSR1) == -1)
		exit(1);
}

int	main(void)
{
	pid_t				pid;
	struct sigaction	sa;

	sa.sa_flags = SA_SIGINFO;
	sa.sa_sigaction = handle_signal;
	pid = getpid();
	if (sigaction(SIGUSR1, &sa, NULL) == -1)
		exit(1);
	if (sigaction(SIGUSR2, &sa, NULL) == -1)
		exit(1);
	ft_printf("PID: ");
	ft_putnbr(pid);
	ft_printf("\n");
	while (1)
		pause();
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: YourName <your.email@example.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 15:49:29 by YourName          #+#    #+#             */
/*   Updated: 2025/03/19 19:07:03 by YourName         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/includes/libft.h"
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void	send_terminator(int pid)
{
	static int	i = 0;

	if (i <= 8)
	{
		if (kill(pid, SIGUSR1) == -1)
			exit(1);
	}
	i++;
}

void	send_signal(int pid, char *str)
{
	static int	bit = 0;
	static char	*c = 0;

	if (str)
		c = str;
	if (*c)
	{
		if ((((unsigned char)*c >> bit) % 2) == 0)
			if (kill(pid, SIGUSR1) == -1)
				exit(1);
		if ((((unsigned char)*c >> bit) % 2) == 1)
			if (kill(pid, SIGUSR2) == -1)
				exit(1);
		bit++;
		if (bit == 8)
		{
			c++;
			bit = 0;
		}
	}
	if (!(*c))
		send_terminator(pid);
}

void	ack_receive(int signal, siginfo_t *info, void *context)
{
	static int	id;

	if (info->si_pid != 0)
		id = info->si_pid;
	(void)context;
	if (signal == SIGUSR1)
		send_signal(id, NULL);
	if (signal == SIGUSR2)
		exit(0);
}

int	main(int argc, char **argv)
{
	struct sigaction	sa;

	sa.sa_flags = SA_SIGINFO;
	sa.sa_sigaction = ack_receive;
	if (argc != 3)
	{
		ft_printf("format: ./client <PID> <String>\n");
		exit(1);
	}
	if (sigaction(SIGUSR1, &sa, NULL) == -1)
		exit(1);
	if (sigaction(SIGUSR2, &sa, NULL) == -1)
		exit(1);
	send_signal(ft_atoi(argv[1]), argv[2]);
	while (1)
		pause();
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: YourName <your.email@example.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 15:49:29 by YourName          #+#    #+#             */
/*   Updated: 2025/02/28 18:47:48 by YourName         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/includes/libft.h"
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>

void	send_signal(const pid_t pid, char character)
{
	int	i;

	i = 7;
	while (i >= 0)
	{
		if (character & (1 << i))
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		i--;
		usleep(100);
	}
}

void	send_str(const pid_t pid, char *str)
{
	while (*str)
	{
		send_signal(pid, *str);
		str++;
	}
}

int	main(int argc, char **argv)
{
	pid_t server_pid;
	const char *message;
	int i;

	if (argc != 3)
		return (1);
	server_pid = ft_atoi(argv[1]);
	send_signal(server_pid, argv[2]);
	return (0);
}
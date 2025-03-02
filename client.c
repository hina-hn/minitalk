/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: YourName <your.email@example.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 15:49:29 by YourName          #+#    #+#             */
/*   Updated: 2025/03/02 19:04:28 by YourName         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/includes/libft.h"

#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>

void	send_char(pid_t server_pid, char c)
{
	for (int i = 7; i >= 0; i--)
	{
		if ((c >> i) & 1)
			kill(server_pid, SIGUSR2); // 1 を送信
		else
			kill(server_pid, SIGUSR1); // 0 を送信
		usleep(100);                   // 送信間隔を確保
	}
}

int	main(int argc, char *argv[])
{
	pid_t	server_pid;
	char	*message;

	if (argc != 3)
	{
		printf("Usage: %s <server_pid> <message>\n", argv[0]);
		return (1);
	}
	server_pid = atoi(argv[1]);
	message = argv[2];
	for (int i = 0; message[i] != '\0'; i++)
	{
		send_char(server_pid, message[i]);
	}
	return (0);
}

// void	send_signal(const pid_t pid, char character)
// {
// 	int	i;

// 	i = 7;
// 	while (i >= 0)
// 	{
// 		if (character & (1 << i))
// 			kill(pid, SIGUSR1);
// 		else
// 			kill(pid, SIGUSR2);
// 		i--;
// 		usleep(100);
// 	}
// }

// void	send_str(const pid_t pid, char *str)
// {
// 	while (*str)
// 	{
// 		send_signal(pid, *str);
// 		str++;
// 	}
// }

// int	main(int argc, char **argv)
// {
// 	pid_t		server_pid;
// 	const char	*message;
// 	int			i;

// 	if (argc != 3)
// 		return (1);
// 	server_pid = ft_atoi(argv[1]);
// 	send_signal(server_pid, argv[2]);
// 	return (0);
// }

// #include "libft/includes/libft.h"
// #define _POSIX_C_SOURCE 200112L
// #define _XOPEN_SOURCE 500
// #include <signal.h>
// #include <stdio.h>
// #include <stdlib.h>
// #include <unistd.h>

// #define PID_ERR_NUM -1
// #define PID_ERR_MSG "Error: invaled PID"
// #define CHAR_BIT_LEN 8

// #define USAGE_MSG "Usage: client [server PID] [message]"
// #define ERR_SEND "Error: faild to send signal"

// void	send_message(pid_t pid, const char *message)
// {
// 	unsigned int	bit;
// 	char			c;
// 	int				res;

// 	while (*message)
// 	{
// 		c = *message++;
// 		bit = CHAR_BIT_LEN;
// 		while (bit--)
// 		{
// 			if (c & (1 << bit))
// 				res = kill(pid, SIGUSR2);
// 			else
// 				res = kill(pid, SIGUSR1);
// 			if (res == -1)
// 			{
// 				ft_putendl_fd(ERR_SEND, STDIN_FILENO);
// 				exit(EXIT_FAILURE);
// 			}
// 			usleep(100);
// 		}
// 	}
// }

// pid_t	parse_pid(const char *pid_str)
// {
// 	pid_t	pid;

// 	if (*pid_str == 0 || !ft_strall(pid_str, ft_isdigit))
// 		return (PID_ERR_NUM);
// 	pid = ft_atoi(pid_str);
// 	if (pid <= 0)
// 		return (PID_ERR_NUM);
// 	return (pid);
// }

// int	main(int argc, char *argv[])
// {
// 	pid_t	server_pid;

// 	if (argc != 3)
// 	{
// 		ft_putendl_fd(USAGE_MSG, STDIN_FILENO);
// 		return (EXIT_FAILURE);
// 	}
// 	server_pid = parse_pid(argv[1]);
// 	if (server_pid <= PID_ERR_NUM)
// 	{
// 		ft_putendl_fd(PID_ERR_MSG, STDERR_FILENO);
// 		return (EXIT_FAILURE);
// 	}
// 	send_message(server_pid, argv[2]);
// 	return (EXIT_SUCCESS);
// }

// void	send_char(pid_t server_pid, char c)
// {
// 	for (int i = 7; i >= 0; i--)
// 	{
// 		if ((c >> i) & 1)
// 			kill(server_pid, SIGUSR2); // 1 を送信
// 		else
// 			kill(server_pid, SIGUSR1); // 0 を送信
// 		usleep(100);                   // 送信間隔を確保
// 	}
// }

// int	main(int argc, char *argv[])
// {
// 	pid_t	server_pid;
// 	char	*message;

// 	if (argc != 3)
// 	{
// 		printf("Usage: %s <server_pid> <message>\n", argv[0]);
// 		return (1);
// 	}
// 	server_pid = atoi(argv[1]);
// 	message = argv[2];
// 	for (int i = 0; message[i] != '\0'; i++)
// 	{
// 		send_char(server_pid, message[i]);
// 	}
// 	return (0);
// }

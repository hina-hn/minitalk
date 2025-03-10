/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: YourName <your.email@example.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 15:49:26 by YourName          #+#    #+#             */
/*   Updated: 2025/03/10 16:47:41 by YourName         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/includes/libft.h"
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void	handle_signal(int sig, siginfo_t *info, void *context)
{
	static char	c = 0;
	static int	bit_count = 0;

	(void)info;
	(void)context;
	c |= (sig == SIGUSR2) << (7 - bit_count); // SIGUSR2 を 1、SIGUSR1 を 0 としてセット
	bit_count++;
	if (bit_count == 8)
	{
		write(1, &c, 1); // 1 文字出力
		c = 0;
		bit_count = 0;
	}
}

int	main(void)
{
	struct sigaction	sa;

	sa.sa_sigaction = handle_signal;
	sa.sa_flags = SA_SIGINFO; // `siginfo_t` を取得するために設定
	sigemptyset(&sa.sa_mask);
	sigaction(SIGUSR1, &sa, NULL);
	sigaction(SIGUSR2, &sa, NULL);
	ft_printf("Server PID: %d\n", getpid());
	while (1)
	{
		pause(); // シグナルを待機
	}
	return (0);
}

// #include "libft/includes/libft.h"
// #include <signal.h>
// #include <stdlib.h>
// #include <unistd.h>

// void	handle_signal(int sig, siginfo_t *info, void *context)
// {
// 	static char		c = 0;
// 	static int		bit_count = 0;
// 	static pid_t	client_pid = 0;

// 	(void)context;
// 	if (!client_pid)
// 		client_pid = info->si_pid; // 最初の送信者を記録
// 	c |= (sig == SIGUSR2) << (7 - bit_count);
// 	bit_count++;
// 	if (bit_count == 8)
// 	{
// 		write(1, &c, 1); // 1 文字出力
// 		c = 0;
// 		bit_count = 0;
// 	}
// 	// クライアントにシグナルを送って次のビット送信を促す
// 	kill(client_pid, SIGUSR1);
// }

// int	main(void)
// {
// 	struct sigaction	sa;

// 	ft_printf("Server PID: %d\n", getpid()); // 自作 `ft_printf` で PID を表示
// 	sa.sa_sigaction = handle_signal;
// 	sa.sa_flags = SA_SIGINFO;
// 	sigemptyset(&sa.sa_mask);
// 	sigaction(SIGUSR1, &sa, NULL);
// 	sigaction(SIGUSR2, &sa, NULL);
// 	while (1)
// 	{
// 		pause(); // シグナルを待機
// 	}
// 	return (0);
// }

// #include "libft/includes/libft.h"
// #include <stddef.h>
// // #define _POSIX_C_SOURCE 200809L./client 64871
// #include <signal.h>
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include <unistd.h>

// void	handle_signal(int sig, siginfo_t *info, void *dummy)
// {
// 	static int	bit;
// 	char		c;
// 	static char	g_char;

// 	(void)info;
// 	(void)dummy;
// 	g_char = g_char << 1;
// 	if (sig == SIGUSR1)
// 		g_char |= 1;
// 	else if (sig == SIGUSR2)
// 		;
// 	bit++;
// 	c = 0xff & g_char;
// 	if (bit == 8)
// 	{
// 		write(STDERR_FILENO, &c, 1);
// 		bit = 0;
// 	}
// }

// int	main(void)
// {
// 	struct sigaction	act1;
// 	struct sigaction	act2;

// 	ft_printf("%d\n", getpid());
// 	ft_memset(&act1, 0, sizeof(sigaction));
// 	ft_memset(&act2, 0, sizeof(sigaction));
// 	act1.sa_sigaction = handle_signal;
// 	act2.sa_sigaction = handle_signal;
// 	act1.sa_flags = SA_SIGINFO;
// 	act2.sa_flags = SA_SIGINFO;
// 	sigemptyset(&act1.sa_mask);
// 	sigemptyset(&act2.sa_mask);
// 	sigaddset(&act1.sa_mask, SIGUSR2);
// 	sigaddset(&act2.sa_mask, SIGUSR1);
// 	sigaction(SIGUSR1, &act1, NULL);
// 	sigaction(SIGUSR2, &act2, NULL);
// 	while (1)
// 		pause();
// }

// #include <stddef.h>

// void	handle_signal(int sig, siginfo_t *info, void *dummy)
// {
// 	static int	bit;
// 	char		c;

// 	g_char = g_char << 1;
// 	if (sig == SIGUSR1)
// 		g_char |= 1;
// 	else if (sig == SIGUSR2)
// 		;
// 	bit++;
// 	c = 0xff & g_char;
// 	if (bit == 8)
// 	{
// 		wrte(STDERR_FILENO, &c, 1);
// 		bit = 0;
// 	}
// }

// int	main(void)
// {
// 	struct sigaction	act1;
// 	struct sigaction	act2;

// 	ft_printf("%d\n", getpid());
// 	ft_memset(&act1, 0, sizeof(sigaction));
// 	ft_memset(&act2, 0, sizeof(sigaction));
// 	act1.sa_sigaction = handle_signal;
// 	act2.sa_sigaction = handle_signal;
// 	act1.sa_flags = SA_SIGINFO;
// 	act2.sa_flags = SA_SIGINFO;
// 	sigaddset(&act1.sa_mask, SIGUSR2);
// 	sigaddset(&act2.sa_mask, SIGUSR1);
// 	sigaction(SIGUSR1, &act1, NULL);
// 	sigaction(SIGUSR2, &act2, NULL);
// 	while (1)
// 		pause();
// }

// #include "libft/includes/libft.h"
// #define _POSIX_C_SOURCE 200809L
// #include <signal.h>
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include <unistd.h>

// void	handle_signal(int sig, siginfo_t *info, void *context)
// {
// 	static char	c = 0;
// 	static int	bit_count = 0;

// 	(void)info;
// 	(void)context;
// 	c |= (sig == SIGUSR2) << (7 - bit_count); // SIGUSR2 を 1、SIGUSR1 を 0 としてセット
// 	bit_count++;
// 	if (bit_count == 8)
// 	{
// 		write(1, &c, 1); // 1 文字出力
// 		c = 0;
// 		bit_count = 0;
// 	}
// }

// int	main(void)
// {
// 	struct sigaction	sa;

// 	memset(&sa, 0, sizeof(sa));
// 	sa.sa_sigaction = handle_signal;
// 	sa.sa_flags = SA_SIGINFO; // `siginfo_t` を取得するために設定
// 	sigemptyset(&sa.sa_mask);
// 	sigaction(SIGUSR1, &sa, NULL);
// 	sigaction(SIGUSR2, &sa, NULL);
// 	printf("Server PID: %d\n", getpid());
// 	while (1)
// 	{
// 		pause(); // シグナルを待機
// 	}
// 	return (0);
// }

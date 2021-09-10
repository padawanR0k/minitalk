/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yurlee <yurlee@student.42.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 11:36:44 by yurlee            #+#    #+#             */
/*   Updated: 2021/09/03 11:54:19 by yurlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <signal.h>

void	signal_handler(int sig)
{
	printf("sig %d\n", sig);
	write(STDOUT_FILENO, "!", 1);
	// sigset_t	pendingMask;

	// if (sigpending(&pendingMask) == -1)
	// 	fprintf(stderr, "sigpending\n");
	// write(stdout, "!", &pendingMask);
}

int	main(int argc, char const *argv[])
{
	if (argc < 2)
	{
		return (1);
	}
	else if (argc == 3)
	{
	}
	printf("server");

	pid_t pid;
	pid = getpid();
	printf("argv[1] %s\n", argv[1]);
	printf("pid %d\n", pid);

	struct sigaction sigact;
	//sigset_t pendingMask;

	printf("%s: PID is %ld\n", argv[0], (long)getpid());

	sigact.sa_handler = signal_handler;
	sigfillset(&sigact.sa_mask);
	//sigact.sa_flags = SA_RESETHAND | SA_RESTART;
	sigact.sa_flags = SA_RESTART;

	sigaction(SIGUSR1, &sigact, NULL);
	sigaction(SIGUSR2, &sigact, NULL);

	while (1)
	{
	}
	return (0);
}

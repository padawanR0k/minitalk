/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yurlee <yurlee@student.42.kr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 11:36:44 by yurlee            #+#    #+#             */
/*   Updated: 2021/09/03 11:56:36 by yurlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>


int main(int argc, char const *argv[])
{
	if (argc < 2)
	{
		return (1);
	}
	else if (argc == 3)
	{
	}


	printf("client\n");
	printf("argv[1] %s\n", argv[1]);
	printf("argv[2] %s\n", argv[2]);

	kill(atoi(argv[1]), SIGUSR1);
	kill(atoi(argv[1]), SIGUSR2);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htam <htam@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 21:26:15 by htam              #+#    #+#             */
/*   Updated: 2024/02/02 23:18:09 by htam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libunit.h"


void	load_test(t_unit_test **list, char* test_name, t_test_function f)
{
	t_unit_test *new_test;
	t_unit_test	*test;

	new_test = malloc(sizeof(t_unit_test));
	if (!new_test)
		ft_printf("bla\n"); // error handling, need to free the list and exit
	new_test->fun = f;
	new_test->test_name = ft_strdup(test_name);
	new_test->next = NULL;
	test = *list;
	if (!test)
	{
		*list = new_test;
		return ;
	}
	while (test->next)
		test = test->next;
	test->next = new_test;
}

int	launch_test(t_unit_test **list)
{
	t_unit_test *test;
	
}

void	tester(void)
{
	int	pid;

	pid = fork();
	if (pid < 0)
		ft_printf("bla\n");
	if (pid == 0) // child
	{
		ft_printf("hehe\n");
	}
	else //parent
	{
		int status;

		wait(&status);
		if (WIFSIGNALED(status))
		{
			int	signal = WTERMSIG(status);
			if (signal == SIGSEGV)
				ft_printf("sigfault\n");
			if (signal == SIGBUS)
				ft_printf("sigbus\n");
		}
		if (WIFEXITED(status))
		{
			int exit_status = WEXITSTATUS(status);
		}
	}
}

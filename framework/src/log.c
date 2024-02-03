/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   log.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htam <htam@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 18:13:07 by htam              #+#    #+#             */
/*   Updated: 2024/02/03 19:11:59 by htam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libunit.h"

void	child_logger(char *test_fun)
{
	char *file_name;
	// int	fd[2];
	int	log_fd;

	// pipe(fd);
	file_name = ft_strjoin(test_fun, ".log");
	log_fd = open(file_name, O_CREAT | O_APPEND | O_WRONLY, 0644);
	write(log_fd, "Output:\n", 8);
	dup2(log_fd, 1);
	free(file_name);
}

char *	log_str(t_unit_test *test, int test_result)
{
	char *str;
	
	str = ft_strjoin("\n", test->test_name);
	if (test_result == 0)
		return (ft_strjoin_free_s1(str, " : OK\n------\n"));
	if (test_result == 255)
		return (ft_strjoin_free_s1(str, " : KO\n------\n"));
	else if (test_result == SIGSEGV)
		return (ft_strjoin_free_s1(str, " : SIGSEGV\n------\n"));
	else if (test_result == SIGBUS)
		return (ft_strjoin_free_s1(str, " : SIGBUS\n------\n"));
	else if (test_result == SIGABRT)
		return (ft_strjoin_free_s1(str, " : SIGABRT\n------\n"));
	else if (test_result == SIGFPE)
		return (ft_strjoin_free_s1(str, " : SIGFPE\n------\n"));
	else if (test_result == SIGPIPE)
		return (ft_strjoin_free_s1(str, " : SIGPIPE\n------\n"));
	else if (test_result == SIGILL)
		return (ft_strjoin_free_s1(str, " : SIGILL\n------\n"));
	else
		return (ft_strjoin_free_s1(str, " : UNKNOWN\n------\n"));
}

void	parent_logger(t_unit_test *test, int result)
{
	char *file_name;
	int	log_fd;
	char *str;

	file_name = ft_strjoin(test->test_fun, ".log");
	log_fd = open(file_name, O_CREAT | O_APPEND | O_WRONLY, 0644);
	str = log_str(test, result);
	// ft_putstr_fd(str, log_fd);
	write(log_fd, str, ft_strlen(str));
	free(file_name);
	free(str);
	close(log_fd);
	
}
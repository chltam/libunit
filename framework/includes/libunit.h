/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htam <htam@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 22:19:56 by htam              #+#    #+#             */
/*   Updated: 2024/02/03 19:50:45 by htam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_H
# define LIBUNIT_H

# include "../../libft/libft.h"
# include <unistd.h>
# include <sys/wait.h>
# include <stdio.h>
# include <stdlib.h>
# include <signal.h>
# include <fcntl.h>

# define RED "\033[1;31m"
# define GREEN "\033[1;32m"
# define YELLOW "\033[1;33m"
# define BLUE "\033[1;34m"
# define MAGENTA "\033[1;35m"
# define CYAN "\033[1;36m"
# define WHITE "\033[1;37m"
# define RESET "\033[0m"

# ifndef TOUT
#  define TOUT 1
# endif // !TOUT

typedef int	(*t_test_function)(void);

typedef struct s_unit_test
{
	t_test_function		fun;
	char				*test_fun;
	char				*test_name;
	struct s_unit_test	*next;
}	t_unit_test;

void	load_test(t_unit_test **list, char *test_fun,
			char *test_name, t_test_function f);
int		launch_test(t_unit_test **list);
void	free_list(t_unit_test *head);

/* Utils */

int		w_check(int status);
void	free_exit(t_unit_test *head, int status);
void	child_logger(char *test_fun);
void	parent_logger(t_unit_test *test, int result);

#endif
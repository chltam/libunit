/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htam <htam@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 22:19:56 by htam              #+#    #+#             */
/*   Updated: 2024/02/02 22:46:15 by htam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_H
# define LIBUNIT_H

# include "../libft/libft.h"
# include <unistd.h>
# include <sys/wait.h>
# include <stdio.h>
# include <stdlib.h>
# include <signal.h>

typedef int	(*t_test_function)(void);

typedef struct s_unit_test
{
	t_test_function		fun;
	char				*test_name;
	struct s_unit_test	*next;
}	t_unit_test;

void	load_test(t_unit_test **list, char *test_name, t_test_function f);
int		launch_test(t_unit_test **list);

#endif
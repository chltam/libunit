/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   demo.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htam <htam@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 14:41:55 by htam              #+#    #+#             */
/*   Updated: 2024/02/04 16:24:12 by htam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEMO_H
# define DEMO_H

# include "../../framework/includes/libunit.h"
# include <unistd.h>
# include <stdlib.h>
# include <signal.h>

int	demo_launcher(void);

int	test_ok(void);
int	test_ko(void);
int	test_sigsegv(void);
int	test_sigbus(void);
int	test_sigabrt(void);
int	test_sigfpe(void);
int	test_sigpipe(void);
int	test_sigill(void);
int	test_timeout(void);

#endif
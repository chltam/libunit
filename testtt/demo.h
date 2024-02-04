/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   demo.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htam <htam@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 14:41:55 by htam              #+#    #+#             */
/*   Updated: 2024/02/04 15:11:32 by htam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEMO_H_
#define DEMO_H_

#include "../framework/includes/libunit.h"
#include <unistd.h>
#include <stdlib.h>
#include <signal.h>

int	demo_launcher();

int	test_ok();
int	test_ko();
int	test_sigsegv();
int	test_sigbus();
int	test_sigabrt();
int	test_sigfpe();
int	test_sigpipe();
int	test_sigill();
int	test_timeout();

#endif
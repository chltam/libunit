/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htam <htam@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 14:38:13 by htam              #+#    #+#             */
/*   Updated: 2024/02/04 15:22:42 by htam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "demo.h"

int	demo_launcher()
{
	t_unit_test	*test;

	test = NULL;
	load_test(&test, "demo", "test_OK", test_ok);
	load_test(&test, "demo", "test_KO", test_ko);
	load_test(&test, "demo", "test_sigsegv", test_sigsegv);
	load_test(&test, "demo", "test_sigbus", test_sigbus);
	load_test(&test, "demo", "test_sigabrt", test_sigabrt);
	load_test(&test, "demo", "test_sigfpe", test_sigfpe);
	load_test(&test, "demo", "test_sigpipe", test_sigpipe);
	load_test(&test, "demo", "test_sigill", test_sigill);
	load_test(&test, "demo", "test_timeout", test_timeout);
	return (launch_test(&test));
}

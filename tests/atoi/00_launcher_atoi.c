/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher_atoi.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astavrop <astavrop@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 13:57:24 by astavrop          #+#    #+#             */
/*   Updated: 2024/02/03 18:49:12 by astavrop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../framework/includes/libunit.h"
#include "./atoi_tests.h"

int	atoi_launcher(void)
{
	t_unit_test	*testlist;

	testlist = NULL;
	load_test(&testlist, "ATOI", "Ok test", &test_01);
	load_test(&testlist, "ATOI", "KO test", &test_02);
	load_test(&testlist, "ATOI", "Timeout test", &test_03);
	load_test(&testlist, "ATOI", "Ok test", &test_04);
	load_test(&testlist, "ATOI", "Ok test", &test_05);
	load_test(&testlist, "ATOI", "Ok test", &test_06);
	load_test(&testlist, "ATOI", "Ok test", &test_07);
	load_test(&testlist, "ATOI", "Ok test", &test_08);
	load_test(&testlist, "ATOI", "Ok test", &test_09);
	load_test(&testlist, "ATOI", "Ok test", &test_10);
	load_test(&testlist, "ATOI", "Ok test", &test_11);
	load_test(&testlist, "ATOI", "Ok test", &test_12);
	load_test(&testlist, "ATOI", "Ok test", &test_13);
	load_test(&testlist, "ATOI", "Ok test", &test_14);
	load_test(&testlist, "ATOI", "Ok test", &test_15);
	return (launch_test(&testlist));
}

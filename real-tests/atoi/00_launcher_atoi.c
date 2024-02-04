/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher_atoi.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astavrop <astavrop@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 13:57:24 by astavrop          #+#    #+#             */
/*   Updated: 2024/02/04 13:55:26 by astavrop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../framework/includes/libunit.h"
#include "./atoi_tests.h"

int	atoi_launcher(void)
{
	t_unit_test	*testlist;

	testlist = NULL;
	load_test(&testlist, "ATOI", " 1. OK test", &test_01);
	load_test(&testlist, "ATOI", " 2. KO test", &test_02);
	load_test(&testlist, "ATOI", " 3. Timeout", &test_03);
	load_test(&testlist, "ATOI", " 4. OK test", &test_04);
	load_test(&testlist, "ATOI", " 5. OK test", &test_05);
	load_test(&testlist, "ATOI", " 6. OK test", &test_06);
	load_test(&testlist, "ATOI", " 7. OK test", &test_07);
	load_test(&testlist, "ATOI", " 8. OK test", &test_08);
	load_test(&testlist, "ATOI", " 9. OK test", &test_09);
	load_test(&testlist, "ATOI", "10. OK test", &test_10);
	load_test(&testlist, "ATOI", "11. OK test", &test_11);
	load_test(&testlist, "ATOI", "12. OK test", &test_12);
	load_test(&testlist, "ATOI", "13. OK test", &test_13);
	load_test(&testlist, "ATOI", "14. OK test", &test_14);
	load_test(&testlist, "ATOI", "15. KO test", &test_15);
	return (launch_test(&testlist));
}

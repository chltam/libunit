/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher_ftprintf.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astavrop <astavrop@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 15:21:34 by astavrop          #+#    #+#             */
/*   Updated: 2024/02/04 15:23:56 by astavrop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../framework/includes/libunit.h"
#include "./ft_printf.h"

int	ft_printf_launcher(void)
{
	t_unit_test	*list;

	list = NULL;
	load_test(&list, "ft_printf", "1. OK test", &ft_printf_test_01);
	load_test(&list, "ft_printf", "2. OK test", &ft_printf_test_02);
	load_test(&list, "ft_printf", "3. OK test", &ft_printf_test_03);
	load_test(&list, "ft_printf", "4. OK test", &ft_printf_test_04);
	load_test(&list, "ft_printf", "5. OK test", &ft_printf_test_05);
	load_test(&list, "ft_printf", "6. OK test", &ft_printf_test_06);
	load_test(&list, "ft_printf", "7. OK test", &ft_printf_test_07);
	load_test(&list, "ft_printf", "8. OK test", &ft_printf_test_08);
	return (launch_test(&list));
}

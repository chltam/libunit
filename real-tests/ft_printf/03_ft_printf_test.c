/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_ft_printf_test.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astavrop <astavrop@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 15:06:11 by astavrop          #+#    #+#             */
/*   Updated: 2024/02/04 15:07:01 by astavrop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_printf.h"

/* Basic test with a string */
/* and %s inside            */
/* Expected: OK             */
int	ft_printf_test_03(void)
{
	int	ft;

	ft = ft_printf("Hello, %s", "world!");
	if (ft == 13)
		return (0);
	else
		return (-1);
}

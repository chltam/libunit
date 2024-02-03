/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   13_atoi_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astavrop <astavrop@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 15:49:15 by astavrop          #+#    #+#             */
/*   Updated: 2024/02/03 15:50:45 by astavrop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./atoi_tests.h"

/* Test with numbers and chars */
/* Expected: OK                */
int	test_13(void)
{
	int	result;
	int	expected;

	result = ft_atoi("+42Berlin");
	expected = 42;
	if (result == expected)
		return (0);
	else
		return (-1);
}

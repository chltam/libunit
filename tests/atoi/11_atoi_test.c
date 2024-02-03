/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   11_atoi_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astavrop <astavrop@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 15:47:28 by astavrop          #+#    #+#             */
/*   Updated: 2024/02/03 15:49:05 by astavrop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./atoi_tests.h"

/* Basic test with just a zero */
/* inside the string           */
/* Expected: OK                */
int	test_11(void)
{
	int	result;
	int	expected;

	result = ft_atoi("0");
	expected = 0;
	if (result == expected)
		return (0);
	else
		return (-1);
}

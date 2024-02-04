/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   12_atoi_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astavrop <astavrop@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 15:48:15 by astavrop          #+#    #+#             */
/*   Updated: 2024/02/03 15:49:10 by astavrop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./atoi_tests.h"

/* Basic test with just a lot of zeros */
/* inside the string                   */
/* Expected: OK                        */
int	test_12(void)
{
	int	result;
	int	expected;

	result = ft_atoi("0000000000123");
	expected = 123;
	if (result == expected)
		return (0);
	else
		return (-1);
}

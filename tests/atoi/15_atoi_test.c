/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   15_atoi_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astavrop <astavrop@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 16:05:54 by astavrop          #+#    #+#             */
/*   Updated: 2024/02/03 16:06:19 by astavrop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./atoi_tests.h"
#include <limits.h>

/* Test for MIN_INT */
/* Expected: OK     */
int	test_15(void)
{
	int	result;
	int	expected;

	result = ft_atoi("–2147483648");
	expected = INT_MIN;
	if (result == expected)
		return (0);
	else
		return (-1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   14_atoi_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astavrop <astavrop@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 15:50:32 by astavrop          #+#    #+#             */
/*   Updated: 2024/02/03 16:05:48 by astavrop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./atoi_tests.h"
#include <limits.h>

/* Test for MAX_INT */
/* Expected: OK     */
int	test_14(void)
{
	int	result;
	int	expected;

	result = ft_atoi("2147483647");
	expected = INT_MAX;
	if (result == expected)
		return (0);
	else
		return (-1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10_atoi_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astavrop <astavrop@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 15:47:02 by astavrop          #+#    #+#             */
/*   Updated: 2024/02/03 15:47:21 by astavrop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./atoi_tests.h"

/* Basic test with pluses at   */
/* the beginning of the string */
/* Expected: OK                */
int	test_10(void)
{
	int	result;
	int	expected;

	result = ft_atoi("++123");
	expected = 0;
	if (result == expected)
		return (0);
	else
		return (-1);
}

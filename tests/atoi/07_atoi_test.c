/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   07_atoi_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astavrop <astavrop@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 15:44:44 by astavrop          #+#    #+#             */
/*   Updated: 2024/02/03 15:45:43 by astavrop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./atoi_tests.h"

/* Basic test with minus at    */
/* the beginning of the string */
/* Expected: OK                */
int	test_07(void)
{
	int	result;
	int	expected;

	result = ft_atoi("-123");
	expected = -123;
	if (result == expected)
		return (0);
	else
		return (-1);
}

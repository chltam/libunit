/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   06_atoi_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astavrop <astavrop@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 15:43:20 by astavrop          #+#    #+#             */
/*   Updated: 2024/02/03 15:45:48 by astavrop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./atoi_tests.h"

/* Basic test with empty string */
/* Expected: OK                 */
int	test_06(void)
{
	int	result;
	int	expected;

	result = ft_atoi("");
	expected = 0;
	if (result == expected)
		return (0);
	else
		return (-1);
}

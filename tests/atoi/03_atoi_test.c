/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_atoi_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astavrop <astavrop@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 14:05:24 by astavrop          #+#    #+#             */
/*   Updated: 2024/02/03 15:42:11 by astavrop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./atoi_tests.h"

/* Basic test with char   */
/* Expected: OK           */
int	test_03(void)
{
	int	result;
	int	expected;

	result = ft_atoi("123a1");
	expected = 123;
	if (result == expected)
		return (0);
	else
		return (-1);
}

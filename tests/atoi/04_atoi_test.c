/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_atoi_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astavrop <astavrop@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 15:41:08 by astavrop          #+#    #+#             */
/*   Updated: 2024/02/03 15:42:08 by astavrop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./atoi_tests.h"

/* Basic test with minuses in */
/* the middle of the string   */
/* Expected: OK               */
int	test_04(void)
{
	int	result;
	int	expected;

	result = ft_atoi("123--1");
	expected = 123;
	if (result == expected)
		return (0);
	else
		return (-1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_atoi_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astavrop <astavrop@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 13:57:38 by astavrop          #+#    #+#             */
/*   Updated: 2024/02/03 18:47:30 by astavrop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./atoi_tests.h"

/* Basic test   */
/* Expected: OK */
int	test_01(void)
{
	int	result;
	int	expected;

	result = ft_atoi("123");
	expected = 123;
	if (result == expected)
		return (0);
	else
		return (-1);
}

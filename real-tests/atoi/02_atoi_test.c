/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_atoi_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astavrop <astavrop@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 14:05:23 by astavrop          #+#    #+#             */
/*   Updated: 2024/02/04 14:37:28 by astavrop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./atoi_tests.h"

/* Basic test   */
/* Expected: OK */
int	test_02(void)
{
	int	result;
	int	expected;

	result = ft_atoi("123");
	expected = 123 + 1;
	if (result != expected)
		return (0);
	else
		return (-1);
}

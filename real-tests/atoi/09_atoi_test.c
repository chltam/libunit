/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   09_atoi_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astavrop <astavrop@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 15:46:24 by astavrop          #+#    #+#             */
/*   Updated: 2024/02/03 15:46:58 by astavrop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./atoi_tests.h"

/* Basic test with minuses at  */
/* the beginning of the string */
/* Expected: OK                */
int	test_09(void)
{
	int	result;
	int	expected;

	result = ft_atoi("--123");
	expected = 0;
	if (result == expected)
		return (0);
	else
		return (-1);
}

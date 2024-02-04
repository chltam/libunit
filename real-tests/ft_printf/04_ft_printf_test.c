/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_ft_printf_test.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astavrop <astavrop@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 15:07:12 by astavrop          #+#    #+#             */
/*   Updated: 2024/02/04 15:08:02 by astavrop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_printf.h"

/* Basic test with a string */
/* and %i inside            */
/* Expected: OK             */
int	ft_printf_test_04(void)
{
	int	ft;

	ft = ft_printf("%i", 12345);
	if (ft == 5)
		return (0);
	else
		return (-1);
}

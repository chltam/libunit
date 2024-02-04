/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_ft_printf_test.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astavrop <astavrop@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 15:08:16 by astavrop          #+#    #+#             */
/*   Updated: 2024/02/04 15:09:17 by astavrop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_printf.h"

/* Basic test with a string */
/* and %i inside            */
/* Expected: OK             */
int	ft_printf_test_05(void)
{
	int	ft;

	ft = ft_printf("%i", 12345);
	if (ft == 5)
		return (0);
	else
		return (-1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   06_ft_printf_test.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astavrop <astavrop@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 15:09:21 by astavrop          #+#    #+#             */
/*   Updated: 2024/02/04 15:15:52 by astavrop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_printf.h"

/* Basic test with a string */
/* and %x inside            */
/* Expected: OK             */
int	ft_printf_test_06(void)
{
	int	ft;

	ft = ft_printf("%x", 1234567);
	if (ft == 6)
		return (0);
	else
		return (-1);
}

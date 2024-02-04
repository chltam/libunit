/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   08_ft_printf_test.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astavrop <astavrop@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 15:18:50 by astavrop          #+#    #+#             */
/*   Updated: 2024/02/04 15:20:02 by astavrop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_printf.h"

/* Basic test with a string */
/* and %c inside            */
/* Expected: OK             */
int	ft_printf_test_08(void)
{
	int	ft;

	ft = ft_printf("%c%c%c", 'O', '_', 'O');
	if (ft == 3)
		return (0);
	else
		return (-1);
}

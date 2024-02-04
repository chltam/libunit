/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_ft_printf_test.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astavrop <astavrop@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 14:58:30 by astavrop          #+#    #+#             */
/*   Updated: 2024/02/04 15:04:43 by astavrop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_printf.h"

/* Basic test with simple string */
/* Expected: OK                  */
int	ft_printf_test_01(void)
{
	int	ft;

	ft = ft_printf("Hello, world!");
	if (ft == 13)
		return (0);
	else
		return (-1);
}

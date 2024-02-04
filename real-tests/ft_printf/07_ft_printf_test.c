/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   07_ft_printf_test.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astavrop <astavrop@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 15:15:59 by astavrop          #+#    #+#             */
/*   Updated: 2024/02/04 15:17:19 by astavrop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_printf.h"

/* Basic test with a string */
/* and %p inside            */
/* Expected: OK             */
int	ft_printf_test_07(void)
{
	int	ft;

	ft = ft_printf("%p", (void *) 1234567);
	if (ft == 8)
		return (0);
	else
		return (-1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_null_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astavrop <astavrop@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 20:53:35 by astavrop          #+#    #+#             */
/*   Updated: 2024/02/02 21:20:21 by astavrop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strlen.h"

/* ft_strlen(NULL)        */
/* NULL instead of string */
/*                        */
/* ====================== */
/* Expected: SEGV         */
int	null_test(void)
{
	int		result;
	int		expected;

	result = ft_strlen(NULL);
	expected = 0;
	if (result == expected)
		return (0);
	else
		return (-1);
}

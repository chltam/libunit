/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_buserror_test.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astavrop <astavrop@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 12:41:19 by astavrop          #+#    #+#             */
/*   Updated: 2024/02/03 13:55:55 by astavrop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strlen.h"
#include <stdlib.h>

/* ft_strlen(*(NULL))                */
/* pointer to NULL instead of string */
/*                                   */
/* ================================= */
/* Expected: SIGBUS                   */
int	sigbus_test(void)
{
	char	*buffer;

	buffer = (char *) 0x18C0000000;
	if (ft_strlen(buffer) == 5)
		return (0);
	else
		return (-1);
}

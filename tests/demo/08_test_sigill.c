/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   08_test_sigill.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htam <htam@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 14:43:07 by htam              #+#    #+#             */
/*   Updated: 2024/02/04 16:21:09 by htam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "demo.h"

int	test_sigill(void)
{
	__asm__ ("ud2");
	return (0);
}

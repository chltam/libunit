/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_test_sigbus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htam <htam@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 14:43:07 by htam              #+#    #+#             */
/*   Updated: 2024/02/04 15:03:37 by htam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "demo.h"

int	test_sigbus()
{
  raise(SIGBUS);
	return (0);
}
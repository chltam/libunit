/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_ko_test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astavrop <astavrop@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 21:31:40 by astavrop          #+#    #+#             */
/*   Updated: 2024/02/02 21:32:04 by astavrop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strlen.h"

/* ft_strlen("...") */
/* with some text   */
/*                  */
/* ================ */
/* Expected: KO     */
int	ko_test(void)
{
	int		result;
	int		expected;

	result = ft_strlen("id aliquet lectus proin nibh nisl condimentum id \
		venenatis a condimentum vitae sapien pellentesque habitant morbi \
		tristique senectus et netus et malesuada fames ac turpis egestas \
		sed tempus urna et pharetra pharetra massa massa ultricies mi quis \
		hendrerit dolor magna eget est");
	expected = 284 + 100;
	if (result == expected)
		return (0);
	else
		return (-1);
}

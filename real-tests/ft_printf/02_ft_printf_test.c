/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_ft_printf_test.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astavrop <astavrop@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 15:00:57 by astavrop          #+#    #+#             */
/*   Updated: 2024/02/04 15:05:56 by astavrop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_printf.h"

/* Basic test with a long string */
/* Expected: OK                  */
int	ft_printf_test_02(void)
{
	int		ft;
	char	*str;

	str = "aliquam sem et tortor consequat id porta nibh venenatis cras sed \
		felis eget velit aliquet sagittis id consectetur purus ut faucibus \
		pulvinar elementum integer enim neque volutpat ac tincidunt vitae \
		semper quis lectus nulla at volutpat diam ut venenatis tellus in metus \
		vulputate eu scelerisque felis imperdiet proin fermentum leo vel orci \
		porta non pulvinar neque laoreet suspendisse interdum consectetur \
		libero id faucibus nisl tincidunt eget nullam non nisi est sit amet \
		facilisis magna etiam tempor orci eu lobortis elementum nibh tellus \
		molestie nunc non blandit massa enim nec dui nunc mattis enim ut tellus \
		elementum sagittis vitae et leo duis ut diam quam nulla porttitor massa \
		id neque aliquam vestibulum morbi blandit cursus risus at ultrices mi \
		tempus imperdiet nulla malesuada pellentesque elit eget gravida cum \
		sociis natoque penatibus et magnis dis parturient montes nascetur \
		ridiculus mus mauris vitae ultricies leo integer malesuada nunc vel \
		risus commodo viverra maecenas accumsan lacus vel facilisis volutpat.";
	ft = ft_printf(str);
	if (ft == 1054)
		return (0);
	else
		return (-1);
}

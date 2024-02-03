/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_bigger_str_test.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astavrop <astavrop@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 20:53:33 by astavrop          #+#    #+#             */
/*   Updated: 2024/02/03 12:34:46 by astavrop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strlen.h"

/* ft_strlen("...")  */
/* big string inside */
/*                   */
/* ================= */
/* Expected: OK      */
int	big_string_test(void)
{
	int		result;
	int		expected;

	result = ft_strlen("Lorem ipsum dolor sit amet, consectetur adipiscing \
		elit, sed do eiusmod tempor incididunt ut labore et dolore magna \
		aliqua. Mattis vulputate enim nulla aliquet porttitor. Nam libero \
		justo laoreet sit amet cursus sit amet dictum. Orci ac auctor augue \
		mauris augue neque gravida. Mauris vitae ultricies leo integer \
		malesuada nunc vel. Placerat in egestas erat imperdiet sed. In \
		pellentesque massa placerat duis ultricies lacus sed. Donec massa \
		sapien faucibus et molestie ac feugiat sed. Tortor dignissim \
		convallis aenean et tortor at risus viverra adipiscing. Ultrices \
		neque ornare aenean euismod elementum nisi. Sit amet dictum sit \
		amet justo. Nisi vitae suscipit tellus mauris a diam maecenas sed \
		enim. Non curabitur gravida arcu ac tortor. Risus sed vulputate \
		odio ut enim. Amet luctus venenatis lectus magna fringilla urna \
		porttitor rhoncus dolor. Morbi tincidunt augue interdum velit \
		euismod in pellentesque. Iaculis eu non diam phasellus vestibulum \
		lorem sed risus. Mattis nunc sed blandit libero. Aliquam purus sit \
		amet luctus venenatis. Id eu nisl nunc mi ipsum faucibus vitae");
	expected = 1115;
	if (result == expected)
		return (0);
	else
		return (-1);
}

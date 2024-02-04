/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astavrop <astavrop@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 13:23:06 by astavrop          #+#    #+#             */
/*   Updated: 2024/02/04 15:24:26 by astavrop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>

// General
int			ft_printf(const char *format, ...);

/* Test cases */

int			ft_printf_test_01(void);
int			ft_printf_test_02(void);
int			ft_printf_test_03(void);
int			ft_printf_test_04(void);
int			ft_printf_test_05(void);
int			ft_printf_test_06(void);
int			ft_printf_test_07(void);
int			ft_printf_test_08(void);

/* Launcher */

int			ft_printf_launcher(void);

#endif // !FT_PRINTF_H

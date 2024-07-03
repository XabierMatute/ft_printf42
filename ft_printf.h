/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 12:30:30 by xmatute-          #+#    #+#             */
/*   Updated: 2024/07/02 16:34:41 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include	<stdarg.h>
# include	<unistd.h>

void			ft_putnbr_base_vp(unsigned long long nbr, char *base);
int				case_(char c, va_list va);
int				case_d(int d);
int				case_u(unsigned int u);
int				case_x(unsigned int x);
int				case_xl(unsigned int x);
void			ft_putchar(char c);
void			ft_putnbr_base(long long nbr, char *base);
unsigned int	orderof_base(unsigned long long num, int base);
int				ft_printf(char const *s, ...);

#endif
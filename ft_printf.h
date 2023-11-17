/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tauer <tauer@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 20:39:19 by tauer             #+#    #+#             */
/*   Updated: 2023/11/15 22:27:10 by tauer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <limits.h>

size_t		ft_strlen_printf(const char *str);
int			selecter(const char c, int ret_size, va_list arg);

void		ft_putchar_len(const char c, int *len);
void		ft_putstr_len(const char *s, int *len);
void		ft_putnbr_len(int nb, int *len);
void		ft_putnbr_ptr(size_t nbr, char *base, int *len);
void		ft_putptr_len(void *ptr, int *len);

void		ft_putnbr_base(int nbr, char *base, int *len);
void		ft_putnbr_un(unsigned int nbr, char *base, int *len);

extern int	ft_printf(const char *str, ...);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayajirob <ayajirob@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 14:26:29 by ayajirob          #+#    #+#             */
/*   Updated: 2021/11/21 14:26:30 by ayajirob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long long	a;

	a = n;
	if (a < 0)
	{
		ft_putchar_fd('-', fd);
		a = 0 - a;
	}
	if (a >= 10)
		ft_putnbr_fd(a / 10, fd);
	a = a % 10 + '0';
	ft_putchar_fd(a, fd);
}

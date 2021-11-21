/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayajirob <ayajirob@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 14:25:07 by ayajirob          #+#    #+#             */
/*   Updated: 2021/11/21 14:25:09 by ayajirob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int				sign;
	long long int	count;

	count = 0;
	sign = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '+')
		str++;
	else if (*str == '-')
	{
		sign = sign * -1;
		str++;
	}
	while (*str)
	{
		if ((*str >= '0' && *str <= '9'))
			count = (count * 10) + (*str++ - 48);
		else
			return (count * sign);
	}
	return (count * sign);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayajirob <ayajirob@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 14:26:08 by ayajirob          #+#    #+#             */
/*   Updated: 2021/11/21 14:26:09 by ayajirob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (n-- > 0)
	{
		if (*(unsigned char *)s1 > *(unsigned char *)s2)
			return (*(unsigned char *)s1 - *(unsigned char *)s2);
		else if (*(unsigned char *)s1 < *(unsigned char *)s2)
			return (*(unsigned char *)s1 - *(unsigned char *)s2);
		else
		{
			s1++;
			s2++;
		}
	}
	return (0);
}

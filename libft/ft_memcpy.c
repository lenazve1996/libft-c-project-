/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayajirob <ayajirob@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 14:26:12 by ayajirob          #+#    #+#             */
/*   Updated: 2021/11/21 14:26:13 by ayajirob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*tmp_str;
	unsigned char	*tmp_str2;

	if (src == NULL && dst == NULL)
		return (NULL);
	tmp_str = (unsigned char *)src;
	tmp_str2 = (unsigned char *)dst;
	while (n--)
		*tmp_str2++ = *tmp_str++;
	return (dst);
}

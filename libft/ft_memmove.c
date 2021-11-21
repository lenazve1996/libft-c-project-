/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayajirob <ayajirob@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 14:26:15 by ayajirob          #+#    #+#             */
/*   Updated: 2021/11/21 14:26:16 by ayajirob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*tmp_src;
	char	*tmp_dst;

	if ((void *)dst == NULL || (void *)src == NULL)
		return (NULL);
	tmp_dst = (char *)dst;
	tmp_src = (char *)src;
	if (tmp_src < tmp_dst)
	{
		tmp_dst = tmp_dst + len;
		tmp_src = tmp_src + len;
		while (len--)
			*--tmp_dst = *--tmp_src;
	}
	else
	{
		while (len--)
			*tmp_dst++ = *tmp_src++;
	}
	return (dst);
}

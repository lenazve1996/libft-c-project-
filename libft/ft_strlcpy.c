/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayajirob <ayajirob@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 14:26:59 by ayajirob          #+#    #+#             */
/*   Updated: 2021/11/21 14:27:00 by ayajirob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	src_length;

	src_length = ft_strlen(src);
	if (dstsize != 0)
	{
		while (dstsize-- > 1 && *src)
		{
			*dst++ = *src++;
		}
		*dst = '\0';
	}
	return (src_length);
}

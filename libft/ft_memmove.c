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

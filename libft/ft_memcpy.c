#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*tmp_str;
	unsigned char	*tmp_str2;

	if ((void *)src == NULL)
		return (NULL);
	tmp_str = (unsigned char *)src;
	tmp_str2 = (unsigned char *)dst;
	while (n--)
		*tmp_str2++ = *tmp_str++;
	return (dst);
}

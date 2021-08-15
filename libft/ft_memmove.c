#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *tmp_str;
	unsigned char *tmp_str2;

	tmp_str = (unsigned char *)src;
	tmp_str2 = (unsigned char *)dst;
	while(len--)
		*tmp_str2++ = *tmp_str++;
	return(dst);
}
#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int n;
	int init_dst_len;
	int init_src_len;
	int dst_len;

	dst_len = ft_strlen(dst);
	init_dst_len = dst_len; 
	init_src_len = ft_strlen(src);
	n = dstsize - init_dst_len - 1;
	if (dstsize == 0 || n < 0)
		return (init_src_len + dstsize);
	if (n == 0)
		return (init_src_len + init_dst_len);
	while (n-- && *src)
		dst[dst_len++] = *src++;
	dst[dst_len]= '\0';
	if ((int)dstsize > (init_dst_len + init_src_len + 1))
	{
		while (dst_len < (int)dstsize)
			dst[++dst_len] = '\0';
	}
	return (init_dst_len + init_src_len);
}
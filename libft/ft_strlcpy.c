#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
 {
	size_t	src_length;
	
	src_length = ft_strlen(src);
	if (dstsize != 0)
	{
		while(dstsize-- > 1)
		{
			*dst++ = *src++;
		}
		*dst++ = '\0';
	}
	return(src_length);
 }
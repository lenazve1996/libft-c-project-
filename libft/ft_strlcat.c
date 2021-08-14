// #include <stdio.h>
// #include <string.h>
#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int		n;

	n = ft_strlen(dst);
	if (dstsize != 0 && n <= (int)dstsize)
	{
		while ((dstsize -n) > 1)
		{
			dst[n] = *src++;
			n++;
		}
		dst[dstsize++] = '\0';
	}
		return(ft_strlen(dst) + ft_strlen(src));
}

// int main()
// {
// 	char *dst = strdup("1234567890");
// 	char *src = strdup("5678");
// 	printf("%zu\n", ft_strlcat(dst, src, 5));
// 	printf("%s\n", dst);

// 	char *dst2 = strdup("1234567890");
// 	char *src2 = strdup("5678");
// 	printf("%zu\n", strlcat(dst2, src2, 5));
// 	printf("%s\n", dst2);
// }

#include "libft.h"
// #include <string.h>
// #include <stdio.h>

// size_t	ft_strlen(const char *s)
// {
// 	int	length;
	
// 	length = 0;

// 	while (*s++ != '\0')
// 		length++;
// 	return(length);
// }

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if ((void *)dst == NULL || (void *)src == NULL)
		return (NULL);
	unsigned char *tmp_str;
	unsigned char *tmp_str2;

	tmp_str = (unsigned char *)src;
	tmp_str2 = (unsigned char *)dst;
	while(len--)
		*tmp_str2++ = *tmp_str++;
	return(dst);
}
// int main()
// {
// 	char *s1 = strdup("MZIRIBMZIRIBMZE123");
// 	char *s2 = strdup("MZIR123456");
// 	int len = 17;

// 	printf("%s\n", ft_memmove(s1, s2, len));
// 	printf("%s\n", memmove(s1, s2, len));
// }

// int main()
// {
// 	char *s1 = strdup("MZIR123456");
// 	char *s2 = strdup("MZIRIBMZIRIBMZE123");
// 	int len = 13;

// 	printf("%s\n", ft_memmove(s1, s2, len));
// 	printf("%s\n", memmove(s1, s2, len));
// }
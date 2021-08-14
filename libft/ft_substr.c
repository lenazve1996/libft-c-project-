#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *substr;
	unsigned int n;

	substr = (char *)malloc(len * sizeof(char));
	n = 0;
	if (substr == NULL)
		return (NULL);
	while (n < len)
	{
		substr[n++] = s[start++];
	}
	*substr++ = '\0';
	return (substr);
}
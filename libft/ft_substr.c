#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *substr;
	unsigned int n;

	substr = (char *)malloc((len + 1) * sizeof(char));
	n = 0;
	if (substr == NULL)
		return (NULL);

	if (start >= ft_strlen(s))
	{
		*substr = '\0';
		return (substr);
	}
	while (n < len)
	{
		substr[n++] = s[start++];
	}
	substr[n] = '\0';
	return (substr);
}
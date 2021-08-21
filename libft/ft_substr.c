#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substr;
	unsigned int	n;
	size_t			len_s;

	len_s = ft_strlen(s);
	if (start >= len_s)
		len = 0;
	else if (len_s - start < len)
		len = len_s - start;
	substr = (char *)malloc((len + 1) * sizeof(char));
	n = 0;
	if (substr == NULL)
		return (NULL);
	while (n < len && s[start])
	{
		substr[n++] = s[start++];
	}
	substr[n] = '\0';
	return (substr);
}

#include "libft.h"

char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int len_of_needle;

	if (*needle == '\0')
		return ((char *)haystack);
	len_of_needle = ft_strlen(needle);
	while (*haystack != '\0' && *needle != '\0' && len && ((int)len >= len_of_needle))
	{
		if (ft_strncmp(haystack, needle, len_of_needle) == 0)
			return ((char *)haystack);
		else
		{
			haystack++;
			len--;
		}
	}
	return (NULL);
}
#include <string.h>
#include <stdio.h>
#include "libft.h"

char    *strnstr(const char *haystack, const char *needle, size_t len)
{
	int i;
	int j;
	
	i = 0;
	j = 0;

	if (*needle = '\0')
		return (haystack);
	while (haystack[i] != '\0' && needle[j] != '\0' && len)
	{
		if (haystack[i] == needle[j])
		{
			while (haystack[i] != '\0' && needle[j] != '\0')
			{
				if (haystack[i] == needle[j])
				{
					i++;
					j++;
				}
			}
		}
		else
		{
			len--;
			i++;
			j++;
		}

	}
	return (NULL);
}

int main()
{
	char *s1 = strdup("see FF your FF return FF now FF");
	char *s2 = strdup("FF");
	int len = strlen(s1);

	printf("%s\n", ft_strnstr(s1, s2, len));
	printf("%s\n", strnstr(s1, s2, len));
}
#include <string.h>
#include <stdio.h>
#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	length;
	
	length = 0;

	while (*s++ != '\0')
		length++;
	return(length);
}

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char *new_stack;
	char *new_need;
	int 	tmp_len;

	new_stack = (char *)haystack;
	new_need = (char *)needle;
	tmp_len = len;

	if (*new_need == '\0')
		return (new_stack);
	else if (ft_strlen(new_need) > len)
		return (NULL);
	while (*new_stack && *new_need && len)
	{
		if (*new_stack != *new_need)
			len--;
		else
		{
			tmp_len = tmp_len - len;
			while (*new_stack && len)
			{
				if ((new_stack++ == new_need++) && (*new_need != '\0'))
					len--;
					else if()
			}
			if (*new_need == '\0')
					return ((char *)&haystack[tmp_len]);
		}
		new_stack++;
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
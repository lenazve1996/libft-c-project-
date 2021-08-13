#include <string.h>
#include <stdio.h>

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
	int 	tmp_len;

	new_stack = (char *)haystack;
	tmp_len = len;

	if (*(char *)needle == '\0')
		return (new_stack);
	else if (ft_strlen(needle) > len)
		return (NULL);
	while (*new_stack && *needle && len)
	{
		if (*new_stack != *(char *)needle)
			len--;
		else
		{
			tmp_len = tmp_len - len;
			while (*new_stack && *needle && len)
			{
				if (++new_stack == ++needle)
					len--;
			}
			if (*(char *)needle == '\0')
				return ((char *)&haystack[tmp_len]);
		}
		new_stack++;
	}
	return (NULL);
}

int main()
{
	char *s1 = strdup("12345");
	char *s2 = strdup("34");

	printf("%s\n", ft_strnstr(s1, s2, 4));
	printf("%s\n", strnstr(s1, s2, 4));
}
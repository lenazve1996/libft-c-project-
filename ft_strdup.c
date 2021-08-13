#include <stdio.h>
#include <stdlib.h>
#include <string.h>

size_t ft_strlen(const char *s)
{
	int length;

	length = 0;

	while (*s++ != '\0')
		length++;
	return (length);
}

char	*strdup(const char *s1)
{
	int		len;
	char	*buf;

	len = ft_strlen(s1);
	buf = (char *)malloc(len * sizeof(char));
	if (buf == NULL)
		return (NULL);
	// while (len >= 0)
	// {
		
	// 	buf++;
	// 	count--;
	// }
	// return (buf);
}

int main()
{
	char *s = ft_strdup("12345");
	char *p = strdup("12345");
	printf("%s\n", s);
	printf("%s\n", p);
}
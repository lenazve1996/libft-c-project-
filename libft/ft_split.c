#include "libft.h"
#include <stdio.h>

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

size_t	ft_strlen(const char *s)
{
	int	length;
	
	length = 0;

	while (*s++ != '\0')
		length++;
	return(length);
}
//char *string = "split  ||this|for|me|||||!|";
//нужно сделать алгоритм для определения колва слов нормальный. этот не работает.
int     ft_number_of_str(char const *s, char c)
{
	int n;

	n = 0;
	if (*s != c)
	{
		n = 1;
		s++;
	}
	while (*s)
	{
		if (*s == c && *++s != c)
		{
			n++;
		}
	}
	return (n);
}

char	**ft_split(char const *s, char c)
{
	int     number_of_str;
	int     s_len;
	char    **split_str;
	int i;
	int tmp;
	int str;

	i = 0;
	str = 0;
	number_of_str = ft_number_of_str(s, c);
	s_len = ft_strlen(s);
	if (!(split_str = (char**)malloc((number_of_str + 1) * sizeof(char*))))
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		else
		{
			tmp = i;
			i++;
			while (s[i] != c && s[i] != '\0')
				i++;
			if (!(split_str[str] = ft_substr(s, tmp, i - tmp)))
				free(split_str);
			str++;
			if (s[i] != '\0')
				i++;
		}

	}
	split_str[str] = NULL;
	return (split_str);
}

int main()
{
	char *string = "split  ||this|for|me|||||!|";
	char **result = ft_split(string, '|');

	while(*result)
	{
		printf("%s\n", *result);
		*result++;
	}
}
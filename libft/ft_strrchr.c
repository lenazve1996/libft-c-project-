size_t	ft_strlen(const char *s)
{
	int	length;
	length = 0;

	while (*s++ != '\0')
		length++;
	return(length);
}

char	*ft_strrchr(const char *s, int c)
{   
	int len;

	len = ft_strlen(s);
	while (len >= 0)
		{
			if (s[len] == (char)c)
				return ((char*)&s[len]);
			len--;
		}
	return (NULL);
}
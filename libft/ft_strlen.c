size_t	ft_strlen(const char *s)
{
	int	length;
	length = 0;

	while (*s++ != '\0')
		length++;
	return(length);
}

int main()
{
	printf("%zu\n", ft_strlen("2345"));
	printf("%zu\n", strlen("2345"));
}

size_t	ft_strlen(const char *s)
{
	int	length;
	
	length = 0;

	while (*s++ != '\0')
		length++;
	return(length);
}
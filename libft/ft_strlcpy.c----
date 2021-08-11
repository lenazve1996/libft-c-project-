size_t	ft_strlen(const char *s)
{
	int	length;
	length = 0;

	while (*s++ != '\0')
		length++;
	return(length);
}

 size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
 {
	size_t	src_length;
	
	src_length = ft_strlen(src);
	if (dstsize != 0)
	{
		while(dstsize-- > 1)
		{
			*dst++ = *src++;
		}
		*dst++ = '\0';
	}
	return(src_length);
 }

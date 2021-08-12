 #include <string.h>
 #include <stdio.h>

void    *ft_memchr(const void *s, int c, size_t n)
{
    while ((unsigned char *)s >= '\0' && n-- > 0)
	{
		if (*(unsigned char *)s == (unsigned char)c)
			return ((unsigned char*)s);
		s++;
	}
	return (NULL);
}
int main()
{
	char	*s1 = strdup("as");
	printf("%s\n", ft_memchr(s1, ' ', 5));
	printf("%s\n", memchr(s1, ' ', 5));
}
 #include <string.h>
 #include <stdio.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while(n-- > 0)
	{
		if (*(unsigned char *)s1 > *(unsigned char *)s2)
			return (*(unsigned char *)s1 - *(unsigned char *)s2);
		else if (*(unsigned char *)s1 < *(unsigned char *)s2)
			return (*(unsigned char *)s1 - *(unsigned char *)s2);
		else
			s1++;
			s2++;
	}
	return(0);
}
int main()
{
	char	*s1 = strdup("asd");
	char	*s2 = strdup("asd");
	printf("%d\n", ft_memcmp(s1, s2, 7));
	printf("%d\n", memcmp(s1, s2, 7));
}
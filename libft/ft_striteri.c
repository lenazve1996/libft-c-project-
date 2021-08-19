#include "libft.h"

void    ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int n;

	n = 0;
	while (*s)
	{
		f(n, s);
		s++;
		n++;
	}
	*s = '\0';
}
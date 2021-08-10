#include <stdio.h>
#include <ctype.h>

int	ft_isprint(int	c)
{
	if (c >= 040 && c <= 0176)
		return(1);
	return(0);
}

int main()
{
	printf("%d\n", ft_isprint('c'));
	printf("%d\n", isprint('c'));
}

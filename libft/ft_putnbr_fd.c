#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long long	a;

	a = n;
	if (a < 0)
	{
		ft_putchar_fd('-', fd);
		a = 0 - a;
	}
	if (a >= 10)
		ft_putnbr_fd(a / 10, fd);
	a = a % 10 + '0';
	ft_putchar_fd(a, fd);
}

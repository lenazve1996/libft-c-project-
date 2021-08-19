#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	if (n == 0)
		ft_putchar_fd('0', 1);
	if (n < 0)
	{
		ft_putchar_fd('-', 1);
		n = 0 - n;
	}
	if (n >= 10)
		ft_putnbr_fd(n / 10, fd);
	ft_putchar_fd(n % 10 + '0', fd);
}
#include "libft.h"

int	ft_count_char_number(int n)
{
	int	counter;

	counter = 0;
	if (n == 0 || n < 0)
		counter++;
	while (n != 0)
	{
		n = n / 10;
		counter++;
	}
	return (counter);
}

char	*ft_fill_str(char	*str, int n)
{
	int	tmp;
	int	sign_flag;

	sign_flag = 0;
	if (n < 0)
		sign_flag = 1;
	else
		n = 0 - n;
	*str = '\0';
	if (n == 0)
		*--str = '0';
	else
	{
		while (n != 0)
		{
			str--;
			tmp = n % 10;
			n = (n - tmp) / 10;
			*str = (0 - tmp) + '0';
		}
	}
	if (sign_flag == 1)
		*--str = '-';
	return (str);
}

char	*ft_itoa(int n)
{
	int		number_of_char;
	char	*str;

	number_of_char = ft_count_char_number(n);
	str = (char *)malloc((number_of_char + 1) * sizeof(char));
	if (!(str))
		return (NULL);
	str = str + number_of_char;
	str = ft_fill_str(str, n);
	return (str);
}

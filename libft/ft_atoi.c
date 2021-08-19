#include "libft.h"

int ft_atoi(const char *str)
{
	int sign;
	long long int count;

	count = 0;
	sign = 1;
	while (*str == ' ' || *str == '\t' || *str == '\v' || *str == '\f' || *str == '\r' || *str == '\n')
		str++;
	while (*str)
	{
		if (*str == '+')
			str++;
		else if (*str == '-')
		{
			sign = sign * -1;
			str++;
		}
		else if ((*str >= '0' && *str <= '9'))
		{
			count = (count * 10) + (*str - 48);
			str++;
		}
		else
			return (count * sign);
	}
	return (count * sign);
}
#include "libft.h"

int	ft_isdigit(char	ch)
{
	if (ch >= '0' && ch <= '9')
		return(1);
	return(0);
}

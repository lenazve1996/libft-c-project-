#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new_str;
	int		n;

	if (!s && !f)
		return (NULL);
	n = 0;
	new_str = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!(new_str))
		return (NULL);
	while (s[n] != 0)
	{
		new_str[n] = f(n, s[n]);
		n++;
	}
	new_str[n] = '\0';
	return (new_str);
}

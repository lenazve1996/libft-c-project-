#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	int		s2_size;
	int		s1_size;

	s2_size = ft_strlen(s2);
	s1_size = ft_strlen(s1);
	new_str = (char *)malloc((s2_size + s1_size + 1) * sizeof(char));
	if (!(new_str))
		return (NULL);
	if (*s1 == '\0' && *s2 == '\0')
	{
		*new_str = '\0';
		return (new_str);
	}
	if (*s1 != '\0')
	{
		if (!(ft_strlcpy(new_str, s1, s1_size + 1)))
			return (NULL);
	}
	if (!(ft_strlcat(new_str, s2, s2_size + s1_size + 1)))
		return (NULL);
	return (new_str);
}

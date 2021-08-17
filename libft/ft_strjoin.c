#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	int s2_size;
	int s1_size;

	s2_size = ft_strlen(s2);
	s1_size = ft_strlen(s1);
	if(!(new_str = (char *)malloc((s2_size + s1_size + 1) * sizeof(char))))
		return (NULL);

	if (!(ft_strlcpy(new_str, s1, s1_size + 1)))
		return (NULL);
	if (!(ft_strlcat(new_str, s2, s2_size + s1_size + 1)))
		return (NULL);
	return (new_str);
}
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*tmp_str;
	int		len_for_trim;
	int		n_for_start;

	tmp_str = (char *)s1;
	n_for_start = 0;
	while (*tmp_str && ft_strchr(set, *tmp_str))
	{
		tmp_str++;
		n_for_start++;
	}
	if (*tmp_str == '\0')
		return (tmp_str);
	len_for_trim = ft_strlen(tmp_str);
	tmp_str = tmp_str + len_for_trim - 1;
	while (*tmp_str && ft_strchr(set, *tmp_str))
	{
		tmp_str--;
		len_for_trim--;
	}
	tmp_str = ft_substr(s1, n_for_start, len_for_trim);
	if (!(tmp_str))
		return (NULL);
	return (tmp_str);
}

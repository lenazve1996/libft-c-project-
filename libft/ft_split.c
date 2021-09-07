#include "libft.h"

static	void	ft_free_array(char **split_str, int n_str)
{
	while (n_str >= 0)
		free(split_str[n_str--]);
	free(split_str);
}

static	int	ft_number_of_str(char const *s, char c)
{
	int	number_of_str;
	int	i;

	number_of_str = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && i == 0)
			number_of_str++;
		else if (s[i] != c && s[--i] == c)
		{
			number_of_str++;
			i++;
		}
		else if (s[++i] != c && s[--i] != c)
			i++;
		i++;
	}
	return (number_of_str);
}

static	void	ft_splitting_for_array(char const *s, char c, char **split_str)
{
	int	i;
	int	tmp;
	int	str;

	i = 0;
	str = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			tmp = i;
			i++;
			while (s[i] != c && s[i] != '\0')
				i++;
			split_str[str] = ft_substr(s, tmp, i - tmp);
			if (!split_str[str])
				ft_free_array(split_str, str);
			str++;
		}
		if (s[i] != '\0')
			i++;
	}
	split_str[str] = NULL;
}

char	**ft_split(char const *s, char c)
{
	int		number_of_str;
	char	**split_str;

	number_of_str = ft_number_of_str(s, c);
	split_str = (char **)malloc((number_of_str + 1) * sizeof(char *));
	if (!split_str)
		return (NULL);
	ft_splitting_for_array(s, c, split_str);
	return (split_str);
}

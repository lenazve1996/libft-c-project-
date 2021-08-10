int	ft_isascii(int	c)
{
	if (c >= 000 && c <= 177)
		return(1);
	return(0);
}

int main()
{
	printf("%d\n", ft_isascii(178));
	printf("%d\n", isascii(178));
}

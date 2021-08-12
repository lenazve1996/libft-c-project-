int ft_strncmp(const char *s1, const char *s2, size_t n)
{

	while(*s1 >='\0' && *s2 >='\0' && n-- > 0)
	{
		if ((unsigned char)*s1 > (unsigned char)*s2)
			return ((unsigned char)*s1 - (unsigned char)*s2);
		else if ((unsigned char)*s1 < (unsigned char)*s2)
			return ((unsigned char)*s1 - (unsigned char)*s2);
		else
			s1++;
			s2++;
	}
	return(0);
}
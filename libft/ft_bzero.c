void	*ft_memset(void *b, int c, size_t len)
{
    unsigned char *tmp_str;
    
    tmp_str = (unsigned char *)b;
    while (len--)
        *tmp_str++ = (unsigned char)c;
    return (b);
}
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}

void	*ft_memset(void *b, int c, size_t len)
{
    unsigned char *tmp_str;
    
    tmp_str = (unsigned char *)b;
    while (len--)
        *tmp_str++ = (unsigned char)c;
    return (b);
}

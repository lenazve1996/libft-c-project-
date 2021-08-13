void *ft_calloc(size_t count, size_t size)
{
    void    *buf;
    buf = malloc(count * sizeof(size));
    if (buf == NULL)
        return (NULL);
    while (count)
    {
        *(unsigned char *)buf = '0';
        buf++;
        count--;
    }
    return (buf);
}
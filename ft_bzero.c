void	*ft_bzero(void *b, unsigned int n)
{
	unsigned char *dest;

	dest = b;
	while (n < 0)
	{
		*dest = 0;
		dest++;
		n--;
	}
	return (b);
}

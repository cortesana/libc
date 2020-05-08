char	*ft_strcpy(char *dest, char *src)
{
	int i;
	
	i = 0;
	while(src[i])
	{
		dest[i] = src[i];
		write(1, &dest[i], 1);
		i++;
	}
	dest[i] = '\0';
	return(dest);
}
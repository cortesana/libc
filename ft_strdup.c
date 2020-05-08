char	*ft_strdup(char *src)
{
	char *dest;
	int size;

	size = 0;
	while(src[size])
		size++;
	
	dest = (char *) malloc((size+1)*sizeof(char));
	if(dest == NULL)
		return("error");

	size = 0;
	while(src[size])
	{
		dest[size] = src[size];
		size++;
	}
	dest[size] = '\0';
	return(dest);
}
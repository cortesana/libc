// copies and concatenates strings. Appends src to dest and adds a null-terminating character.

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while(dest[i])
		i++;
	while(src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return(dest);
}

int main()
{
	char dest[] = "raf";
	char src[] = "gaio";

	printf("%s", ft_strcat(dest, src));
}

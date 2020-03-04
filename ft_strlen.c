// returns length of string.

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i])
		i++;
	return(i);
}

int main()
{
	char str[] = "holamundo";
	printf("%d", ft_strlen(str));
}

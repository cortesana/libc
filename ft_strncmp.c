// size-bounded string comparison.

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	i = 0;
	
	while(s1[i] && s2[i] && i <= n - 1)
	{
		if(s1[i] != s2[i])
		{	
			printf("%d", s1[i] - s2[i]);
			return(s1[i] - s2[i]);
		}
		i++;
	}
	printf("%d", 0);
	return(0);
}

int main()
{
	char s1[]= "holA";
	char s2[]= "hola";
	unsigned int n;
	n = 4;
	ft_strncmp(s1, s2, n);
}

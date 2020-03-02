#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int i;
	
	i = 0;
	while(s1[i] && s2[i])
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
	char s1[] = "holA";
	char s2[] = "hola";
	ft_strcmp(s1, s2);
	return(0);
}

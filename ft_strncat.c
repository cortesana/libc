#include <stdio.h>
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	while(dest[i])
		i++;
	while(src[j] && j <= nb)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return(dest);
}

int main()
{
	char dest[] = "hola";
	char src[] = "garrafa";
	unsigned int nb;
	nb = 6;
	printf("%s", ft_strncat(dest, src, nb));
	return(0);
}

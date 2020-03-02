#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	while(dest[i])
		i++;
	while(src[j] && (i + j) < size - 1)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return(i + j);
}

int main()
{
	char dest[]= "hola";
	char src[] = "adios";
	unsigned int size;
	size = 8;
	printf("%u", ft_strlcat(dest, src, size));
	return(0);
}

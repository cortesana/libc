// size-bounded copy of the string src to dst including the null-terminating character.

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while(src[i] && i < n)
	{
		dest[i] = src[i];
		write(1, &dest[i], 1);
		i++;
	}
	dest[i] = '\0';
	return(dest);
}

int main()
{
	unsigned int n;
	char dest[] = "guayaba";
	char src[] = "hola";

	n = 3;	
	ft_strncpy(dest, src, n);
} 			

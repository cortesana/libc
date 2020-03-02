#include <stdlib.h>
#include <stdio.h>
#include <string.h>

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

int main()
{
	char src[] = "holafunciona";
	printf("%s\n", strdup(src));
	printf("%s\n", ft_strdup(src));
	return(0);
}
	

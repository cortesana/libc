#include <stdlib.h>
#include <unistd.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int i;
	int j;
	int x;
	char *dest;

	size = 0;
	i = 0;
	j = 0;
	x = 0;
	/*
	dest = (char *) malloc(sizeof())
	*/
	while(strs[size][j])
		size++;
	if(size == 0)
		free(dest);
	while(i <= size)
	{
		j = 0;
		while(while[i][j])
		{
			j++;
			x++;
		}
		dest = (char *) malloc(*sep*sizeof(char));
		i++;
	}		
	return(strs);
}

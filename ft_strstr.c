#include <stdio.h>
char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int len;
	int needle;

	i = 0;
	len = 0;
	while(to_find[len])
		len++;
	if(len == 0)
		return(str);
	while(str[i])
	{
		j = 0;
		if(str[i] == to_find[0])
		{	
			needle = i;
			while(to_find[j] && (str[i] == to_find[j]))
			{
				if(j == len - 1)
					return(&str[needle]);
				j++;
				i++;
			}
		}		
		i++;
	}	
	return(NULL);
}

int main()
{
	char str[] = "hneedleay";
	char to_find[] = "iii";
	printf("%s", ft_strstr(str, to_find));
	return(0);
}

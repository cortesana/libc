#include <stdio.h>

char	*ft_strlowcase(char *str, int i)
{
	while (str[i])
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return(str);
}	
char	*ft_strcapitalize(char *str)
{
	int i;
	
	i = 0;
	ft_strlowcase(str, i);
	str[0] = str[0] - 32;
	while (str[i])
	{
		if(!((str[i] >= '0' && str[i] <= '9') ||
			(str[i] >= 'A' && str[i] <= 'Z') ||
				(str[i] >= 'a' && str[i] <= 'z')) &&
					(str[i + 1] >= 'a' && str[i +1] <= 'z'))
			str[i + 1] = str[i + 1] - 32;
		i++;
	} 
	return(str);	
}

int main()
{
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s", ft_strcapitalize(str));
	return(0);
}

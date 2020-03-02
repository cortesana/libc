#include <unistd.h>

char	*ft_units(char *str, int i)
{
	int r;
	char c;
	r = (str[i] % 16);
	if(r <= 15 && r >= 10)
	{
		if(r == 10)
			str[i] = 'a';
		else if(r == 11)
			str[i] = 'b';
		else if(r == 12)
			str[i] = 'c';
		else if(r == 13)
			str[i] = 'd';
		else if(r == 14)
			str[i] = 'e';
		else if(r == 15)
			str[i] = 'f';
	}
	c = r + '0';
	str[i] = c;
	return(str);
}

char	*ft_non_printable(char *str, int i)
{
	if(!(str[i] > 31 && str[i] < 127))
		{
			str[i] = '\\';
			str[i] = (str[i] / 16);
			ft_units(str, i);
		}
		return(str);
}

char	*ft_strgenerator(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		if(str[i] >= 32 && str[i] <= 127)
			str[i] = str[i];	
		ft_non_printable(str, i);
		i++;
	}
	return(str);
}

void    ft_putstr_non_printable(char *str)
{
	int i;
	char dest[] = "whatever";
	char *src;
	src = ft_strgenerator(str);
	i = 0;
	while(src[i])
	{
		while(str[i] > 31 && str[i] < 127)
			dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	i = 0;
	while(dest[i])
	{
		str[i] = dest[i];
		write(1, &str[i], 1);
		i++;
	}
}
int main()
{
	char str[]="Coucou\ntu vas bien ?";
	ft_putstr_non_printable(str);
}

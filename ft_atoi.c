#include <stdio.h>
#include <unistd.h>
int	ft_negativesign(int sign, int number)
{
	if(sign % 2 != 0)
                number = number * -1;
	return(number);
}
int	ft_atoi(char *str)
{
	int i;
	int number;
	int sign;

	i = 0;
	number = 0;
	sign = 0;
	while(str[i] == ' ')
		i++;
	while(str[i] == '+' || str[i] == '-')
	{
		if(str[i] == '-')
			sign++;
		i++;
	}
	while(str[i] <= '9' && str[i] >= '0')
	{	
		number = number*10 + (str[i] - '0');
		i++;
	}
	ft_negativesign(sign, number);
	return(number);
}
int main()
{
	char str[] = "   +-1assa223akdj";
	printf("%d", ft_atoi(str));
}

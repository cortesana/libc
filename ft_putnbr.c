// displays a number with write().

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char c;
	if(nb >= 0 && nb <= 9)
	{
		c = nb + '0';
		write(1, &c, 1);
	}
	if(nb > 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	if(nb < 0)
	{
		write(1, "-", 1);
		ft_putnbr(nb * -1);
	}
}
int main()
{
	ft_putnbr(12345);
	return(0);
}	

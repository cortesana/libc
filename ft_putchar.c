// displays char c (converted to an 'unsigned char') with write().

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
	write(1, "\n", 1);
}
int	main()
{
	char c;
	
	c = '0';
	ft_putchar(c);
}

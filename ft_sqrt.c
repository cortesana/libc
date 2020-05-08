int ft_sqrt(int nb)
{
	int n;
	
	n = nb - 1;
	while(n && nb>0)
	{
		if((nb / n == n) && (nb % n == 0))
			return(n);
		n--;
	}
	return(0);
}
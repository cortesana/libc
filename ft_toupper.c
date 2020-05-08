char ft_toupper(char c)
{
	if(c >= 'A' && c <= 'Z')
		c = c - 32;
	return(c);
}
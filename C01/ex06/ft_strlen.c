#include <stdio.h>

int	ft_strlen(char *str)
{
	int	counter;
	
	counter = 0;
	while (*str != 0)
	{
		str++;
		counter++;
	}
	
	return (counter);
}

int	main(void)
{
	char	*str;
	int	length;
	
	str = "EDISON";
	length = 0;
	length = ft_strlen(str);
	printf("%i", length);
	
	return (0);
}

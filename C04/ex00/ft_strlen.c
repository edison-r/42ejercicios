#include <stdio.h>

/* int	ft_strlen(char *str)
{
	int	counter;
	
	counter = 0;
	while (*str != 0)
	{
		str++;
		counter++;
	}
	
	return (counter);
} */

int	ft_strlen(char *str)
{
	if(str[0] == '\0') // caso base
		return (0);

	return (1 + ft_strlen(str + 1));
}
/*
int	main(int argc, char **argv)
{
	char	*str;
	int	length;
	
	if(argc != 2)
		return (1);
		
	str = argv[1];
	length = 0;
	
	length = ft_strlen(str);
	
	printf("%i", length);
	
	return (0);
} */

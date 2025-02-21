#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;
	
	i = 0;
	if(str[i] == '\0')
	{
		return (1);
	}
	
	while (str[i] != '\0')
	{
		if (str[i] <= 32 || str[i] >= 126)
		{
			return (0);
		}
		i++;
	}
	
	return (1);
}

int	main(int argc, char **argv)
{
	char	*str;
	int	res;

	if (argc != 2)
		return (1);
		
	str = argv[1];
	
	res = ft_str_is_printable(str);
	printf("%s\n", str);
	printf("resultado: %i\n", res);
	
	return (0);
}

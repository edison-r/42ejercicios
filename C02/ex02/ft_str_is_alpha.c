#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;
	
	i = 0;
	if(str[i] == '\0')
	{
		return (1);
	}
	
	while (str[i] != '\0')
	{
		if ((str[i] < 'A' || str[i] > 'Z') && (str[i] < 'a' || str[i] > 'z'))
		{
			return (0);
		}
		i++;
		//while (str[] != '\0'); str++; se puede recorrer el while sin indice
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
	
	res = ft_str_is_alpha(str);
	printf("%s\n", str);
	printf("resultado: %i\n", res);
	
	return (0);
}

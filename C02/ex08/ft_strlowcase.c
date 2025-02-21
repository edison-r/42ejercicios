#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}
		else 
			str[i] = str[i];
		i++;
	}
	str[i] = '\0';
	
	return (str);
}

int	main(int argc, char **argv)
{
	char	*str;

	if (argc != 2)
		return (1);
		
	str = argv[1];
	
	printf("%s\n", str);
	*str = *ft_strlowcase(str);
	printf("%s\n", str);
	
	return (0);
}

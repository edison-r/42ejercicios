#include <stdio.h>

int	ft_is_alphanum(char c)
{
	int	is_digit;
	int	is_upper;
	int	is_lower;

	is_digit = (c >= '0' && c <= '9');
	is_upper = (c >= 'A' && c <= 'Z');
	is_lower = (c >= 'a' && c <= 'z');
	return (is_digit || is_upper || is_lower);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	new_word;

	i = 0;
	new_word = 1;
	while (str[i] != '\0')
	{
		if (ft_is_alphanum(str[i]) == 1)
		{
			if (new_word == 1 && str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
			else if (new_word == 0 && str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] + 32;
				
			new_word = 0;
		}
		else
			new_word = 1;
		i++;
	}
	return (str);
}

int	main(int argc, char **argv)
{
	char	*str;

	if (argc != 2)
		return (1);
		
	str = argv[1];
	
	printf("Original: %s\n", str);
	ft_strcapitalize(str);
	printf("Resultado: %s\n", str);
	
	return (0);
}

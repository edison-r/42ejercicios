int	ft_atoi(char *str)
{
	int 	i; // recorre el str
	int	sign; // calcula el signo de la 
	int	result; // numero final convertido - por si no va en el examen: long int	result;
	
	i = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13)) // espacios
		i++;
	
	sign = 1;
	while (str[i] == '+' || str[i] == '-')
	{
		if(str [i] == '-')
			sign = -sign;
		i++;
	}
	
	result = 0;
	while(str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i] - '0'; // restamos 48 al caracter: da el num
		i++;
	}
	
	return (result * sign); // return ((int) (result * sign);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	char	*str;
	int	num;
	
	if (argc != 2)
		return (1);

	str = argv[1];
	
	num = ft_atoi(str);
	
	printf("atoi: %i", num);
	
	return (0);
}*/

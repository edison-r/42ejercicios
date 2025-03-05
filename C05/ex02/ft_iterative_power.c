#include <stdio.h>

int ft_atoi(char *str)
{
	int i;
	int sign;
	long int result;

	i = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;

	sign = 1;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}	

	result = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}

	return ((int) (result * sign));
}


int	ft_iterative_power(int nb, int power)
{
	int i;
	int num;

	if (power < 0)
		return (0);

	if (nb == 0 && power == 0)
		return (1);

	i = 1;
	num = nb;
	while (i < power)
	{
		nb *= num;
		i++;
	}

	return (nb);
}

int	main(int argc, char **argv)
{
	int	num;
	int	power;
	int res;

	if (argc != 3)
		return (1);

	num = ft_atoi(argv[1]);
	power = ft_atoi(argv[2]);

	res = ft_iterative_power(num, power);

	printf("Resultado de %i^%i: %i\n", num, power, res);

	return (0);

}

// pwr de un num: 2^5 = 2*2*2*2*2
